#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to STD_OUT
 * @filename: buffer to read from
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters it could read and print
 * Or 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (!buf && !filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);

	free(buf);
	close(fd);
	return (r);
}
