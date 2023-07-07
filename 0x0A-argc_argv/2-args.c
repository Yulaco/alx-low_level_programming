#include "main.h"
/**
 * main - program displays every argument it gets
 * @argc: counts command line arguments
 * @argv: array of pointers which lists arguments
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
