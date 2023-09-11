#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the struct dog
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
