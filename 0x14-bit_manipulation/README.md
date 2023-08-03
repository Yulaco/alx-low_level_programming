**0x14 C-Bit Manipulation**

*0.0 Create a function converts a binary number to an unsigned int.*

	-Prototype: unsigned int binary_to_uint(const char *b);
	-b is pointing to a string of 0 and 1 chars.
	-Return the converted number, or 0 if b is NULL.

*1.1 Create a function that prints the binary representation of a number.*

	-Prototype: void print_binary(unsigned long int n);
	-The use of arrays not allowed.
	-The use of malloc not allowed.
	-The use of %s or / operators not allowed.

*2.10 Create a function that returns the value of a bit a given index.*

	-Prototype: int get_bit(unsigned long int n, unsigned int index);
	-Idex is the index, starts from 0 of the bit to get.
	-Return value of the bit at index index or -1 if an error occured.

*3.11 Create a function that sets the value of a bit to 1 at a given index.*

	-Prototype: int set_bit(unsigned long int *n, unsigned int index);
	-Index is the index, starts from 0 of the bit to set.
	-Return 1 if successful, or -1 if an error occurred.

*4.100 Create a function that sets the value of a bit to 0 at a given index.*

	-Prototype: int clear_bit(unsigned long int *n, unsigned int index);
	-Index is the index, starts from 0 of the bit to set.
	-Return 1 if successful, or -1 if an error occurred.

*5.101 Create a function that returns the number of bits you would need to flip to get from one number to another.*

	-Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
	-The use of the % or / operators are not allowed.
