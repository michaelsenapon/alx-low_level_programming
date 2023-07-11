#include "main.h"

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 * Return: 0 or number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_read;
	char *buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	num_read = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, num_read);

	free(buffer);
	close(fd);

	return (num_read);
}
