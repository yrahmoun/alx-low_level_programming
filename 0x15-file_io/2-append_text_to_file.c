#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to append to
 * @text_content: content to write to file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int buff_written = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
