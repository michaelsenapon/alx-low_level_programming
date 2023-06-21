#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - function that frees dogs
  * @d: pointer to memory address of dog details
  *
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
