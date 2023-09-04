#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>


/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t write_result, text_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[text_length])
            text_length++;
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_length > 0)
    {
        write_result = write(fd, text_content, text_length);
        if (write_result == -1 || write_result != text_length)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
	return (1);
}

