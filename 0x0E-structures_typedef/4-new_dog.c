#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to name of dog.
 * @age: Age of dog.
 * @owner: Pointer to string owner of dog.
 *
 * Return: NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, copy;
	dog_t *new;

	for (a = 0; name[a] != '\0'; a++)
	for (b = 0; owner[b] != '\0'; b++)

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(a * sizeof(new->name));

	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (copy = 0; copy <= a; copy++)
		new->name[copy] = name[copy];

	new->age = age;
	new->owner = malloc(b * sizeof(new->owner));

	if (new->owner == NULL)
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}

	for (copy = 0; copy <= b; copy++)
		new->owner[copy] = owner[copy];
	return (new);
}
