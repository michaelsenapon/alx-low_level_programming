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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
