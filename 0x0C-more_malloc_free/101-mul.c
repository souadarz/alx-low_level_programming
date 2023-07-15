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
	long int mul = 0;

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
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld\n", mul);
	}

	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
