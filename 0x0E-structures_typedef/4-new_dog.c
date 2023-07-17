#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - Function prints elements accessed from struct.
 *
 * @name: Name of dog to be copied and stored.
 * @age: Value of dog's age.
 * @owner: Owner copy to be stored and stored.
 *
 * Return: NULL if fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *novo;
		return (NULL);


	novo = malloc(sizeof(dog_t));

	if (!novo)
		return (NULL);

	if (name)
	{
		novo->name = _strdup(name);
		if (!(novo->name))
		{
			free(novo);
			return (NULL);
		}
	}
	else
		novo->name = NULL;

	novo->age = age;

	if (owner)
	{
		novo->owner = _strdup(owner);
		if (!(novo->owner))
		{
			free(novo->name);
			free(novo);
			return (NULL);
		}
	}
	else
		novo->owner = NULL;

	return (novo);

}

/**
 * _strdup -Function copies string.
 *
 * @str: Pointer to the string.
 *
 * Return: 0.
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int tamanho = 0;

	if (str == NULL)
	{
		for (tamanho = 0; str[tamanho]; tamanho++)

		ptr = malloc(sizeof(char)  * (tamanho + 1);

		if (ptr == NULL)
		{
			for (tamanho = 0; ptr[tamanho = str[tamanho]; tamanho--)

			return (ptr);
		}
	}
	return (0);
}
