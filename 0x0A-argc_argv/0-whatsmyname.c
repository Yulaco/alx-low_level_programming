#include "main.h"
/**
 * main - program displays name
 * @argc: counts command line arguments
 * @argv: array of pointers lists arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
