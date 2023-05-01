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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
