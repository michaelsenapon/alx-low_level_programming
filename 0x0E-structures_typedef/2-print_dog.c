#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: A pointer to variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
