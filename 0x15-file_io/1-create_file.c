#include "main.h"

/**
 * create_file - creates file and writes in it
 * @filename: name of file to create
 * @text_content: content of file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int buff_written = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		buff_written = write(fd, text_content, len);
		if (buff_written != len)
			return (-1);
	}
	return (1);
}
