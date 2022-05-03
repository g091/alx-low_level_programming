#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file & prints it to the POSIX stdout
 * @filename: file
 * @letters: no. of letters to read & print
 * Return: no. of letters it could read & print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, f_read, f_write;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	f_read = read(fd, buf, letters);
	if (f_read == -1)
	{
		free(buf);
		return (0);
	}
	f_write = write(STDOUT_FILENO, buf, f_read);
	if (f_write == -1 || f_read != f_write)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (f_write);
}
