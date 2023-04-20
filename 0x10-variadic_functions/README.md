0x10. C-Variadic functions

The following project works on C programming variadic functions are functions that takes in any varying of number of arguments as inputs.

0. Create a function that gets back the total of all its parameters.

	-Prototype: int sum_them_all(const unsigned int n, ...);
	-If n == 0, return 0

1. Compose a function that produces digits followed by a new line.
	
	-Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
	-Separator is the string to be printed between numbers.
	-n is the figure of integers run to the function.
	-Whenever separator is NULL, don’t print.
	-Display new line at the termination of the function.

2. Create a function that displays a sequence of characters, followed by a new line.

	-Prototype: void print_strings(const char *separator, const unsigned int n, ...);
	-Separator is the string to be printed between the strings.
	-n is the figures of integers run to the function.
	-Whenever separator is NULL, don’t print.	
	-On the condition one of the string is NULL, rather print (nil).
	-At conclusion of function print new line.

3. Create a function that displays anything.

	-Prototype: void print_all(const char * const format, ...);
	-where format is a list of types of arguments passed to the function.
		c: char
		i: integer
		f: float
		s: char * (if the string is NULL, print (nil) instead all different char should be disregarded.
	-Utilize a maximum of
		2 while loops
		2 if
	-Maximum variables to declare 9.
	-At conclusion of function print new line.
