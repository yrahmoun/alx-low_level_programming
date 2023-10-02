#include "main.h"

/**
 * read_textfile - reads from a file and prints what's read
 * @filename: file to read from
 * @letters: byters to read
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int buff_read = 0;
	int buff_written = 0;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (!buff)
		return (0);
	buff_read = read(fd, buff, letters);
	if (buff_read == -1)
	{
		free(buff);
		return (0);
	}
	buff_written = write(STDOUT_FILENO, buff, buff_read);
	if (buff_written == -1 || buff_read != buff_written)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (buff_written);
}
