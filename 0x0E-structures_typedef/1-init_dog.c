#include "dog.h"

/**
 * init_dog - intializes the struct dog
 * @d: struct pointer
 * @name: nale of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
