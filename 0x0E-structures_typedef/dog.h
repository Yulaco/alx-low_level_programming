#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of struct dog.
 * @name: Pointer dog name of type character.
 * @age: Dog age of type integer.
 * @owner: Pointer dog owner of type character.
 */

typedef struct dog
{
	char *name;
	double age;
	char *owner;
} dog_t;

#endif

#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
