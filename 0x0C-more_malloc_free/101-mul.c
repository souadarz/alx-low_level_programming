#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
