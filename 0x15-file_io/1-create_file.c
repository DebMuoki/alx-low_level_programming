#include "main.h"

/**
 * create_file - this function creates a file and writes text content to it
 * @filename: this is the name of the file to be created
 * @text_content: a NULL terminated string to write to the given file
 *
 * Return: returns 1 on success, and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);

	if (text_content)
	{
	while (text_content[count])
	count++;

	if (write(fd, text_content, count) != count)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}

