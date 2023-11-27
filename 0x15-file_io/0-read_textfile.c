#include "main.h"

/**
 * read_textfile - Reads a text file and prints to standard output.
 * @filename: Pointer to file to create.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of letters could read and print.
 * If file not open or read, return 0.
 * If filename is NULL return 0.
 * If write fails or does not write expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;

	char *file;

	if (filename == NULL)
		return (0);

	file = malloc(sizeof(char) * letters);
	if (file == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, file, letters);
	w = write(STDOUT_FILENO, file, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(file);
		return (0);
	}

	free(file);
	close(o);

	return (w);
}
