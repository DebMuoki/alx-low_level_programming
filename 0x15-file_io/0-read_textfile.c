#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_count;
	char *buffer;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	return (0);

	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
	free(buffer);
	return (0);
	}

	buffer[read_count] = '\0';
	if (write(STDOUT_FILENO, buffer, read_count) != read_count)
	{
	free(buffer);
	return (0);
	}

	free(buffer);
	close(fd);
	return (read_count);
}

