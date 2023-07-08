#include <stdio.h>
#include <stdlib.h>

/**
 * main - fonction that muliplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if receive two arguments otherwise 1
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
