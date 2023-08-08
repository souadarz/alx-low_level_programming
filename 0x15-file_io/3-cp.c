#include "main.h"

/**
 *main - that copies the content of a file to another file
 *@filename: the name of 
 *@text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char *agrv[])
{
	int file_d, len, wrt;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
	{
		close(file_d);
		return (-1);
	}

	if (text_content == NULL)
	{
		if (file_d)
			return (1);

		else
			return (-1);
	}

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
