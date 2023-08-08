#include "main.h"

/**
 * create_buffer - Function allocates bytes to a buffer.
 * @file: File name.
 *
 * Return: Pointer.
 */
char *create_buffer(char *file)
{
	char *location;

	location = malloc(sizeof(char) * 1024);

	if (location == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (location);
}

/**
 * close_file - Function closes file descriptor.
 * @fd: File descriptor.
 *
 * Return: 0 if successful, -1 error.
 */
void close_file(int fd)
{
	int file;

	file = close(fd);
	if (file == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Function copies content.
 * @argc: Count arguments.
 * @argv: Pointer to argument
 *
 * Return: 0 if successful,
 * else exit code 97 if argument incorrect,
 * else exit code 98 if file_from doesn't exist or cannot read,
 * else exit code 99 if file_to cannot be created or written to,
 * else exit code 100 if cannot close file_to or file_from.
 */
int main(int argc, char *argv[1])
{
	int rd, wrt, from, to;
	char *location;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}
	location = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, location, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(location);
			exit(98);
		}

		wrt = write(to, location, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cant, write to %s\n", argv[2]);
			free(location);
			exit(99);
		}

		rd = read(from, location, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(location);
	close_file(from);
	close_file(to);
	return (0);
}
