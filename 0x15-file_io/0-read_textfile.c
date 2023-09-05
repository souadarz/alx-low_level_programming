#include "main.h"

/**
 * read_textfile - function that reads a text file
 *                 and prints it to the POSIX standard output
 * @filename:pointer to the adress of the file
 * @letters:the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	int file_d;
	ssize_t result_r, result_w;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY, 0600);

	if (file_d == -1)
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
	result_r = read(file_d, ptr, letters);

	if (result_r == -1)
	{
		close(file_d);
		return (0);
	}
	result_w = write(STDOUT_FILENO, ptr, result_r);

	if (result_w == -1)
	{
		close(file_d);
		return (0);
	}
	free(ptr);
	close(file_d);
	return (result_r);
}
