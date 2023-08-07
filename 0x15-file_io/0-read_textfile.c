#include "main.h"

/**
 * read_textfile - Function reads a text file and
 * prints to the POSIX standard output.
 * @filename: Pointer to file to create.
 * @letters: Number of letters to read and print.
 *
 * Return: File not opened 0, if filename NULL 0,
 * if write fails or doesnt write the bytes, 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;

	char *store;

	if (filename == NULL)
		return (0);

	store = malloc(sizeof(char) * letters);
	if (store == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, store, letters);
	w = write(STDOUT_FILENO, store, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(store);
		return (0);
	}

	free(store);
	close(o);

	return (w);
}
