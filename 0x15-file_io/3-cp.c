#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void handle_error(int error_code, const char *msg, const char *filename);
void copy_file_contents(int fd_from, int fd_to, const char *filename_from, const char *filename_to);

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
 * copy_file_contents - Copies the contents of one file to another.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 * @filename_from: The name of the source file.
 * @filename_to: The name of the destination file.
 */
void copy_file_contents(int fd_from, int fd_to, const char *filename_from, const char *filename_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	do {
		bytes_read = read(fd_from, buffer, sizeof(buffer));
		if (bytes_read == -1)
			handle_error(98, "Error: Can't read from file %s\n", filename_from);

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			handle_error(99, "Error: Can't write to file %s\n", filename_to);
	} while (bytes_read > 0);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		handle_error(99, "Error: Can't write to file %s\n", argv[2]);

	copy_file_contents(fd_from, fd_to, argv[1], argv[2]);

	if (close(fd_from) == -1)
		handle_error(100, "Error: Can't close fd %d\n", argv[1]);

	if (close(fd_to) == -1)
		handle_error(100, "Error: Can't close fd %d\n", argv[2]);

	return (0);
}

