#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees memory allocated for a structure
 * @d: Pointer to allocated memory for a structure aliased as dog_t
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
