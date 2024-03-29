#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees dogs
 * @d: dog to be free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
