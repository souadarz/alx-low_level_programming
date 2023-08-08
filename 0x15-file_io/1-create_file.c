#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: the name of the file to create.
 *@text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, len, result;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_d < 0)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
		;

	result = write(file_d, text_content, len);
	close(file_d);

	if (result < 0)
		return (-1);

	return (1);
}
