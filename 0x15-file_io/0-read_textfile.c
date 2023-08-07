#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Function reads and prints the content of a text file.
 * @filename:  name of the file to read.
 * @letters: number of letters to read and print.
 * Return: The actual number of letters read and printed else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid;
	ssize_t bytes_read, bytes_writen;
	char *buffer;

	if (filename == NULL)
		return (0);

	fid = open(filename, O_RDONLY);
	if (fid == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fid);
		return (0);
	}

	bytes_read = read(fid, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fid);
		return (0);
	}

	bytes_writen = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_writen == -1 || bytes_writen != bytes_read)
	{
		free(buffer);
		close(fid);
		return (0);
	}

	free(buffer);
	close(fid);

	return (bytes_writen);
}

