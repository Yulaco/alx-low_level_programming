#include "main.h"
/**
 * main - program displays name
 * @argc: counts command line arguments
 * @argv: array of pointers lists arguments
 *
 * Return: 0.
 */
int main(_attribute_((unused)) int argc, _attribute_((unused)) char *argv[])
{
	print("%s\n", *argv);
	return (0);
}
