#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - Reads a text file and prints its content to STDOUT.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of bytes read and printed.
 *         0 if the function fails or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;


	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
