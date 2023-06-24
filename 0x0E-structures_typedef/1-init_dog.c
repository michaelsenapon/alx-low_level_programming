#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Function initialize a variable of type struct dog
 * @d: A variable of type struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		if (name == NULL || owner == NULL)
			return;
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
