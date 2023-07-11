#include "main.h"

/**
 * argstostr - function concatenates all arguments of program
 * @ac: counts argument
 * @av: array of character pointer listing arguments
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, cont1 = 0, cont2 = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	a = 0;
	while (a < ac)
		a++;
	{
		for (b = 0; av[a][b]; b++)
			a++;
	}
	cont2 += ac;

	ptr = malloc(cont2 + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	a = 0;
	while (a < ac)
		a++;
	{
	for (b = 0; av[a][b]; b++)
	{
		ptr[cont1] = av[a][b];
		cont1++;
	}
	if (ptr[cont1] == '\0')

	{
		ptr[cont1++] = '\n';
	}
	}
	return (ptr);
}

