#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new structure of type dog_t
 * @name: Pointer to string for name of dog
 * @age: Age of dog
 * @owner: Name of owner
 *
 * Return: Pointer to a structure of type dog_t
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * _strlen(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);
	return (dog);
}

/**
 * _strlen - Compute the length of string
 * @str: String to compute
 *
 * Return: Number of length
 */
int _strlen(char *str)
{
	int i;

	if (str != NULL)
	{
		for (i = 0; str[i]; i++)
			;
		i++;
		return (i);
	}
	return (0);
}

/**
 * _strcpy - Function copies a string from a source to a destination
 * @src: Source of string
 * @dest: destination of string
 *
 * Return: Pointer to the destination
 */
void _strcpy(char *dest, char *src)
{
	int i;
	int len_src = _strlen(src);

	if (dest != NULL && src != NULL)
	{
		for (i = 0; i < len_src; i++)
			dest[i] = src[i];
	}
}
