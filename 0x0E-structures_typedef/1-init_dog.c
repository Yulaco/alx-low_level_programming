#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function initializes vaiable struct dog.
 *
 * @d: Pointer to struct.
 * @name: Pointer to the character.
 * @age: Assignment to variable age.
 * @owner: Pointer to the character.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

	d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
