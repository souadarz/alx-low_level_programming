#include "main.h"

/**
 *read_textfile - function that reads a text file
 *           and prints it to the POSIX standard output.
 *@filename: pointer to the adress of the file
 *@letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count1, count2;
	int file_d;
	char *ptr;

	if (filename == NULL)
		return (0);
	file_d = open("filename", O_RDONLY);

	if (file_d < 0)
	{
		close(file_d);
		return (0);
	}
	ptr = malloc(sizeof(char) * letters);

	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}

	count1 = read(file_d, ptr, letters);

	if (count1 == -1)
		return (0);
	count2 = write(STDOUT_FILENO, ptr, count1);

	if (count2 == 0)
		return (0);
	free(ptr);
	close(file_d);
	return (count2);
}
