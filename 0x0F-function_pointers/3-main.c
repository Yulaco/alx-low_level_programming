#include "3-calc.h"

/**
 * main - Function used for mathematical operations.
 * @argc:  Arguments count.
 * @argv: Array of strings.
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int argument1, argument2;
	char *a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	argument1 = atoi(argv[1]);
	a = argv[2];
	argument2 = atoi(argv[3]);

	if (get_op_func(a) == NULL || a[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*a == '/' && argument2 == 0) || (*a == '%' && argument2 == 0))
	{
		printf("Eror\n");
		exit(100);
	}

	printf("%d\n", get_op_func(a)(argument1, argument2));

	return (0);
}
