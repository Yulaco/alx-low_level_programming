#include "main.h"

/**
 * create_file - Function creates a file.
 * @filename: Pointer to file to create.
 * @text_content: Pointer to terminating string.
 *
 * Return: 1 if successful, -1 if failed.
 */
int create_file(const char *filename, char *text_content)
{
	int file1, file2, length;

	if (filename == NULL)
		return (-1);

	file1 = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file1 == -1)
		return (-1);

	if (text_content != NULL)
	{
		 length = 0;

		 while (text_content[length])
		{
			file2 = write(file1, text_content, length);
			length++;
		}

		if (file2 == -1)
			return (-1);
	}
	close(file1);
	return (1);
}
