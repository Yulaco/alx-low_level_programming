#include "3-calc.h"

/**
 * get_op_func - Function selects operations performed by user.
 *
 * @s: Pointer to the string.
 *
 * Return: Pointer to the function that corresponds to the
 * operator given as parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i;

	for (i = 0; (ops[i].op); i++)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
	}
	return (NULL);
}
