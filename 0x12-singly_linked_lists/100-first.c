#include <stdio.h>

/**
 * tortoise - Prints a string before the main function is carried out.
 *
 * Return: 0.
 */
void __attribute__((constructor)) tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
