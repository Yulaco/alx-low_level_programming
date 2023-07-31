#include "main.h"

/**
 * main - Program adds positive numbers.
 * @argc: Count of arguments.
 * @argv: Array of pointers which lists arguments.
 *
 * Return: 0 if no number, else 1.
 */
int main(int argc, char *argv[])
{
	int positive, num, add = 0;

	for (positive = 1; positive < argc; positive++)
	{
		num = 0;

		while (argv[positive][num])
		{
			if (argv[positive][num] < '0' || argv[positive][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}
		add += atoi(argv[positive]);
	}
	printf("%d\n", add);
	return (0);
}
