#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: Name of the file to create
 * @text_content: String of characters to write into file
 *
 * Return: 1 on Success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT|O_RDWR|O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	len = strlen(text_content);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
