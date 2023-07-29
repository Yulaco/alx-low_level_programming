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
	dog_t *novo;

	novo = malloc(sizeof(dog_t));

	if (novo == NULL)
	{
		printf("fail\n");
		return (NULL);
	}

	novo->name = strdup(name);
	novo->age = age;
	novo->owner = strdup(owner);

	return (novo);
}
