#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Function displays struct dog.
 *
 * @d: Pointer to element.
 *
 * Return: 0.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
	}
}
