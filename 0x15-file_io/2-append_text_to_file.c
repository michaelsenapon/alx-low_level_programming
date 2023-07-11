#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Name of the file
 * @text_content: String of characters at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
