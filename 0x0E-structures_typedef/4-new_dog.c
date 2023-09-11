#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int len1 = 0;
	int len2 = 0;

	nw_dog = malloc(sizeof(dog_t));
	if (!nw_dog)
		return (0);
	while (name[len1])
		len1++;
	nw_dog->name = malloc(len1 + 1);
	if (!nw_dog->name)
	{
		free(nw_dog);
		return (0);
	}
	while (owner[len2])
		len2++;
	nw_dog->owner = malloc(len2 + 1);
	if (!nw_dog->owner)
	{
		free(nw_dog->name);
		free(nw_dog);
		return (0);
	}
	len1 = 0;
	while (name[len1])
	{
		nw_dog->name[len1] = name[len1];
		len1++;
	}
	nw_dog->name[len1] = '\0';
	len2 = 0;
	while (owner[len2])
	{
		nw_dog->owner[len2] = owner[len2];
		len2++;
	}
	nw_dog->owner[len2] = '\0';
	nw_dog->age = age;
	return (nw_dog);
}


