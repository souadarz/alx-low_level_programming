#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the sign of a random number
 *
 * Description: Generates a random number and print whether, positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
