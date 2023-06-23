#include <stdio.h>
#include <math.h>

/**
* main - prints the largest prime factor of the number 612852475143
*
* Return: 0
*/

int main(void)
{
	long i, maxpf;
	long n = 612852475143;
	double square = sqrt(n);

	for (i = 1; i <= square; i++)
	{
		if (n % i == 0)
			maxpf = n / i;
	}

	printf("%ld\n", maxpf);
	return (0);
}
