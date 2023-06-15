#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function concatenates all arguments passed to the program
 * @ac: Number of arguments passed
 * @av: Array of Pointers to the strings passed
 *
 * Return: Pointer to the concatenated string or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0, len_sum;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Find length of each of the strings in av */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	len_sum = len + ac;

	/* Allocate enough memory and store all strings passed to program */
	str = malloc(sizeof(char) * len_sum + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
