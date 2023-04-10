#include <stdio.h>
#include "main.h"

/**
 * main - Program to display its name
 * accompined by a newline.
 * @argc: Counts arguments.
 * @argv: Array of pointer to the strings.
 *
 *Return: 0.
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
