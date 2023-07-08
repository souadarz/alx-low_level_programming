#include <stdio.h>

/**
 * main - fonction that prints its name
 * argc: argument count
 * argv: argument vector
 * Return: 0
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
