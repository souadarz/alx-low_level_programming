#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: the name of the file to create.
 *@text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, len, wrt;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC);

	if (file_d == -1)
	{
		close(file_d);
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
		;

	wrt = write(file_d, text_content, len);

	if (wrt == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
