#include "main.h"
#include <stdio.h>

#define BUFF_SIZE 1024

/**
 * close_fd - closes file descriptors
 * @fd_src: fd1
 * @fd_dest: fd2
 */

void close_fd(int fd_src, int fd_dest)
{
	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd_src);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd_dest);
		exit(100);
	}
}

/**
 * main - copies content of one file to another
 * @ac: number of arguments
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd_src, fd_dest;
	int buff_read, buff_written;
	char buff[BUFF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_dest = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((buff_read = read(fd_src, buff, BUFF_SIZE)) > 0)
	{
		buff_written = write(fd_dest, buff, buff_read);
		if (buff_read != buff_written)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (buff_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close_fd(fd_src, fd_dest);
	return (0);
}
