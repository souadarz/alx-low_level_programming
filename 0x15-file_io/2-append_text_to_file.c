#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename:the name of the file
 *@text_content: the NULL terminated string to add at the end of the file
 *Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, result, len;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		if (file_d)
			return (1);

		else
			return (-1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;
	result = write(file_d, text_content, len);

	if (result == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
