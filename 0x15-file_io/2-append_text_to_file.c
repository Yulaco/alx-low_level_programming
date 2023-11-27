#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Pointer to file to create.
 * @text_content: Terminating string at end of file.
 *
 * Retrun: 1 if successful, else -1 if failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int app1, app2, strlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		strlen = 0;

		while (text_content[strlen])
			strlen++;
	}

	app1 = open(filename, O_WRONLY | O_APPEND);
		app2 = write(app1, text_content, strlen);

	if (app1 == -1 || app2 == -1)
		return (-1);

	close(app1);
	return (1);
}
