#include "function_pointers.h"

/**
 * print_name - Function responsible for reproducing a name.
 *
 * @name: String to be attached.
 * @f: Represents pointer to function.
 *
 * Return: Nothing is returned.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;

	f(name);
}
