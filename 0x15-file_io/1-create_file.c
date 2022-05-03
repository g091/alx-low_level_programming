#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t f_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		f_write = write(fd, text_content, len);
		if (f_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
