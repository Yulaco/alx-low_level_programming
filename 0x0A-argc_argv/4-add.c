#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - Addition of positive numbers.
 * @argc: Counts arguments.
 * @argv: Array of pointers to the strings.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int pnt;
	int pntt;
	int sum = 0;

	if (argc == 1)
	{
		;
	}

	for (pnt = 1; argv[pnt]; pnt++)
	{
		for (pntt = 0; argv[pnt][pntt]; pntt++)
		{
			if (!isdigit(argv[pnt][pntt]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[pnt]);
	}
	printf("%d\n", sum);
	return (0);
}
