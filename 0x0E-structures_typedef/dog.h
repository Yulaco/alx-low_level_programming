#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - New data type to join dissimilar kinds of data items.
 *
 * @name: Name of dog indicated as type character.
 * @age: Age of dog indicated as type float.
 * @owner: Owner of dog indicated as type character pointer.
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} myDog;

#endif

#ifndef MAIN_C
#define MAIN_C

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
