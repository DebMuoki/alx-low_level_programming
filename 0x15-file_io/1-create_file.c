#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Function creates a file and writes text content to it.
 * @filename: name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fid, bytes_writen = 0, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
	}

	fid = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fid == -1)
		return (-1);

	if (text_len > 0)
		bytes_writen = write(fid, text_content, text_len);

	close(fid);

	if (bytes_writen != text_len)
		return (-1);

	return (1);
}

