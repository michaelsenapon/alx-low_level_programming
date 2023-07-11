#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	copy_file_to_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_file_to_file - function that copies a file content into another file
 * @file_from: file to be copied
 * @file_to: file to write into
 *
 * Return: void
 */
void copy_file_to_file(const char *file_from, const char *file_to)
{
	int fd1, fd2, num_read;
	
	char *buffer [1024];

	/* open filefrom */
	fd1 = open(file_from, O_RDONLY);

	if (!file_from || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	
	while ((num_read = read(fd1, buffer, 1024)) > 0)
	{
		if (write(fd2, buffer, num_read) != num_read || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
		

	if (num_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}	
