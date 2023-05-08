#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The argument count.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If successful - 0.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_count, write_count;
	char buffer[BUFFER_SIZE];
	mode_t file_perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	to_fd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, file_perms);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_count = read(from_fd, buffer, BUFFER_SIZE)))
	{
		if (read_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

		write_count = write(to_fd, buffer, read_count);
	if (write_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);

	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);

	return (0);
}

