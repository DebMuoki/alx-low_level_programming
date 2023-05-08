#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
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

