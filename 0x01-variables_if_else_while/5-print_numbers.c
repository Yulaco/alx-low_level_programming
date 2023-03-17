#include <stdio.h>

/**
 * main - Prints single digit number of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		if (!(a == 101 || a == 113))
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
