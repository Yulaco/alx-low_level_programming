#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count comand line arguments
 * @argv: array of pointers lists arguments
 *
 * Return: If no two arguments reeived, print Error, return 1.
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

