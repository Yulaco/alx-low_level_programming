#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Multiplication of two numbers.
 * @argc: Counts arguments.
 * @argv: Array of pointers to the strings.
 *
 * Return: 1.
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");

		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

