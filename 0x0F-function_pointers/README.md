0X0F. C-Function pointers

The current project aims to look at function pointers which in essence are useable to store functions.

0. Compose a function that produces a name.

	-Prototype: void print_name(char *name, void (*f)(char *));

1. Put down a function that implements a function set as a parameter on every component of an array.

	-Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

		- Size indicates the collection of the array.
		- In addition action is a pointer to the function to use.

2. Compose a function that looks for an integer data type.

	-Protoytpe: int int_index(int *array, int size, int (*cmp)(int));

		- Size is the collection of numbers in the array array.
		- cmp points to the function and it will be used contrast values.
		- int_index gets back the index of the first element when cmp function does not get back 0.
		- In the event that no element matches, get back -1.
		- In the event size is less than equal to zer0, get back -1.

3. Create a program that executes basic operations.

	-Prototype: int op_add(int a, int b);
	-Prototype: int op_sub(int a, int b);
	-Prototype: int op_mul(int a, int b);
	-Prototype: int op_div(int a, int b);
	-Prototype: int op_mod(int a, int b);
