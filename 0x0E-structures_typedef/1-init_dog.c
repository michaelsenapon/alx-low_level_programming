#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes a structure named dog
  * @d: pointer to memory address of structure.
  * @name: pointer to name of dog.
  * @age: age of the dog.
  * @owner: pointer to memory address of owner of dog.
  *
  * Return: Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
