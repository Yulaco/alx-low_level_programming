#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make change
 * for anf amount of money.
 * @argc: Counts arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 if number of arguments is negative. 1.
 */

int main(int argc, char *argv[])
{
	int money, valor = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}

	money = atoi(argv[1]);

	while (money > 0)
	{
		if (money >= 25)
			money = money - 25;
		else if (money >= 10)
			money = money - 10;
		else if (money >= 5)
			money = money - 5;
		else if (money >= 2)
			money = money - 2;
		else if (money >= 1)
			money = money - 1;

		valor++;
	}
	printf("%d\n", valor);

	return (0);
}
