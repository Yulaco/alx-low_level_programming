#include "main.h"
#include <stdio.h>

/**
 * main - Program displays the figure of arguments which goes into it.
 * @argc: Counts the arguments.
 * @argv: Array of pointers to the strings.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc - 1);
	return (0);
}
