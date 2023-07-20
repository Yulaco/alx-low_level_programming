#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct display - New function to host different data types.
 *
 * @symbol: Represents the data type.
 * @f: A function pointer pointing to a function.
 */
typedef struct show
{
	char *symbol;
	void (*f)(va_list arg);
} show_list;

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

#endif
