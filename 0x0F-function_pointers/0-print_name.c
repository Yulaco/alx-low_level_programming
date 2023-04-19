#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Fuction responsible for reproducing a name.
 *
 * @name: String to be attached.
 * @f: Represents pointer to function.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
