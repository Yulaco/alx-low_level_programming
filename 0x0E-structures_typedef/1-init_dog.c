#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that assigns a variable of type struct dog.
 *
 * @d: Pointer directing to data type struct.
 * @name: Pointer directing to character.
 * @age: Age of dog indicated as type float.
 * @owner: Pointer directing to character.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).owner = owner;
	(*d).age = age;
}
