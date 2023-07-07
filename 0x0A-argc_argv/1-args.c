#include "main.h"
/**
 * main - program displays arguments passed into it
 * @argc: counts command line arguments
 * @argv: array of pointers which lists arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc - 1);
	return (0);
}
