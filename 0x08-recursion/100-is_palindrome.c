#include "main.h"

/**
 * is_palindrome - Function gets string if it is a palindrome.
 * @s: Pointer to the string.
 *
 * Return: 1 if string is a palidndrome, else 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (test_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - Function gets length of a string.
 * @s: Calculates length of string.
 *
 *  Return: Length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * test_palindrome - Checks each character for the palindrome.
 * @s: Locates string.
 * @num1:Lowest item.
 * @num2: Largest item.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int test_palindrome(char *s, int num1, int num2)
{
	if (num1 >= num2)
		return (1);
	if (s[num1] != s[num2])
		return (0);
	return (test_palindrome(s, num1 + 1, num2 - 1));
}
