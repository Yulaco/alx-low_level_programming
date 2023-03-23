#include "main.h"

/**
 * positive_or_negative - Tests that function is positive, negative or zero,
 * when given a case zero.
 * @0: Number to be checked.
 *
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

		return;
}
