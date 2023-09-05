#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @ac: the number of arguments
 * @av: the argument vector
 * Return: ....
 */

int main(int ac, char *av[])
{
	char buf[1024];
	int f_d1, f_d2, result1, result2;

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	if (av[1] == NULL)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	if (av[2] == NULL)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	f_d1 = open(av[1], O_RDONLY);

	if (f_d1 < 0)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	f_d2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (f_d2 < 0)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);

	while (result1)
	{
		result1 = read(f_d1, buf, 1024);

		if (result1 < 0)
			dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
		result2 = write(f_d2, buf, result1);

		if (result2 < 0)
			dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (close(f_d1) < 0)
		dprintf(2, "Can't close fd %d\n", f_d1), exit(100);

	if (close(f_d2) < 0)
		dprintf(2, "Can't close fd %d\n", f_d2), exit(100);
	return (0);
}
