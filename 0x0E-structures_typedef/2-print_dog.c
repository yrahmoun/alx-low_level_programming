#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the content of the struct
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
