#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"

/**
 * handle_error - Handles error and exits with the specified code.
 * @error_code: The error code.
 * @msg: The error message to print.
 * @filename: The name of the file related to the error.
 */
void handle_error(int error_code, const char *msg, const char *filename)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(error_code);
}

/**
 * display_elf_info - Display ELF header information.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_elf_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
	printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             ");
	if (elf_header->e_ident[EI_CLASS] == ELFCLASS32)
	{
	printf("ELF32\n");
	}
	else if (elf_header->e_ident[EI_CLASS] == ELFCLASS64)
	{
	printf("ELF64\n");
	}

	printf("  Data:                              ");
	if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB)
	{
	printf("2's complement, little endian\n");
	}
	else if (elf_header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
	printf("2's complement, big endian\n");
	}

	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (elf_header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
	printf("UNIX - System V\n");
	break;
	case ELFOSABI_NETBSD:
	printf("UNIX - NetBSD\n");
	break;
	case ELFOSABI_SOLARIS:
	printf("UNIX - Solaris\n");
	break;
	default:
	printf("<unknown: %d>\n", elf_header->e_ident[EI_OSABI]);
	break;
	}

	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (elf_header->e_type)
	{
	case ET_EXEC:
	printf("EXEC (Executable file)\n");
	break;
	case ET_DYN:
	printf("DYN (Shared object file)\n");
	break;
	default:
	printf("<unknown: %d>\n", elf_header->e_type);
	break;
	}

	printf("  Entry point address:               0x%lx\n", (unsigned long) elf_header->e_entry);
}

/**
 * main - Display ELF header information.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;

	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
	dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
	return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	handle_error(98, "Error: Cannot open file %s\n", argv[1]);

	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read != sizeof(elf_header))
	handle_error(98, "Error: Cannot read ELF header from file %s\n", argv[1]);

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
	elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
	elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
	elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
	dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
	close(fd);
	return (98);
	}

	display_elf_info(&elf_header);

	close(fd);

	return (0);
}

