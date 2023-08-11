#include "main.h"

/**
 *main - that displays the information contained
 *       in the ELF header at the start of an ELF file.
 *@argc: number of arguments
 *@av: the argument vector
 * Return:...
 */

int main(int argc, char *av[])
{
	char buffer[10];
	int fd_1, result1;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	if (av[0] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[0]), exit(98);

	if (av[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_1 = open(av[1], O_RDONLY);

	if (fd_1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	while (result1)
	{
		result1 = read(fd_1, buffer, 10);

		if (result1 < 0)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}

	if (close(fd_1) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1), exit(98);

	return (0);
}
