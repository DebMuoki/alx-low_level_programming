#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Function appends text to the end of a file.
 * @filename: This is the name of the file.
 * @text_content: NULL-terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fid, bytes_written = 0, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[text_len] != '\0')
		text_len++;

	fid = open(filename, O_WRONLY | O_APPEND);
	if (fid == -1)
		return (-1);

	bytes_written = write(fid, text_content, text_len);
	close(fid);

	if (bytes_written != text_len)
		return (-1);

	return (1);
}

