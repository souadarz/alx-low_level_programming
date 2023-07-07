#include <stdio.h>

/**
 * main - fonction that prints all arguments it receives
 * argc: argument count
 * argv: argument vector
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
