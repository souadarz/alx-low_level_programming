#include "main.h"

/**
 *main - that copies the content of a file to another file
 *@argc: number of arguments
 *@argv: the argument vector
 * Return:...
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, result1, result2;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_1 = open(argv[1], O_RDONLY);

	if (fd_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (result1)
	{
		result1 = read(fd_1, buffer, 1024);

		if (result1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		result2 = write(fd_2, buffer, result1);

		if (result2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	close(fd_1);

	if (close(fd_1) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1), exit(100);
	close(fd_2);

	if (close(fd_2) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2), exit(100);
	return (0);
}
