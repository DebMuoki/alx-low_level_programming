#include "main.h"

/**
 * _strlen -  this function returns the length of a given string
 * @str: this is the string to be checked
 *
 * Return: returns the length of the given string
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str && str[len])
	len++;

	return (len);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: this is the name of the file to append to
 * @text_content: this is the content to append to the file
 *
 * Return: returns 1 on success, and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count;
	size_t len;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (text_content)
	{
	len = _strlen(text_content);
	write_count = write(fd, text_content, len);
	if (write_count == -1 || (size_t)write_count != len)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}

