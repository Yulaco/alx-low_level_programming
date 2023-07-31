#include "main.h"

/**
 * argstostr - Function concatenates all arguments of program.
 * @ac: Counts argument.
 * @av: Pointer to array of characters.
 *
 * Return: NULL if either ac == 0, or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	int a, b, cont = 0, leng = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{

		for (b = 0; av[a][b]; b++)
		{
			leng++;
		}
		leng++;
	}

	ptr = malloc((leng + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	a = 0;
	while (a < ac)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[cont++] = av[a][b];
		}
		ptr[cont++] = '\n';
		a++;
	}
	ptr[cont++] = '\0';
	return (ptr);
}

