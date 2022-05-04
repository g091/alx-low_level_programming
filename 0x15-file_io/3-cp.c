#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * _error - read file
 * @e: error no.
 * @filename: filename
 */

void _error(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * cp - copies the content of 1 file to another
 * @file_from: source file
 * @file_to: destination file
 * Return: 1 on success, -1 on failure
 */

void cp(char *file_from, char *file_to)
{
	int fd_read, f_read, fd_write, f_write;
	char *buf[1024];

	fd_read = open(file_from, O_RDONLY);
	if (fd_read < 0)
		_error(98, file_from);

	fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_write < 0)
	{
		close(fd_read);
		_error(99, file_to);
	}
	do {

		f_read = read(fd_read, buf, 1024);
		if (f_read < 0)
			_error(98, file_from);

		f_write = write(fd_write, buf, f_read);
		if (f_write < f_read)
			_error(99, file_to);
	}	while (f_write == 1024);
	if (close(fd_read) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		close(fd_write);
		exit(100);
	}
	if (close(fd_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
}

/**
 * main - copies the content from 1 file to another
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on succes, -1 on error
 */

int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
