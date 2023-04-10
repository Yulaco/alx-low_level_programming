#include "main.h"
#include <stdio.h>

/**
 * main - Program displays every argument it gets.
 * @argc: Couns arguments.
 * @argv: Array of pointers to the strings.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;

	while (*argv)
		printf("%s\n", *argv++);
	return (0);
}
