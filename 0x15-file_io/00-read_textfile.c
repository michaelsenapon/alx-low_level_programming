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
	int n, r, p;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);

	r = read(p, buf, letters);
	if (r == -1)
		return (0);

	n = write(STDOUT_FILENO, buf, letters);
	if (n != letters)
		return (0);

	free(buf);
	close(p);
	return (r);
}
