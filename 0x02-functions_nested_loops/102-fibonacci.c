#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers
  *
  * Return: 0
  */
int main(void)
{
	int i = 0;
	long n = 1, m = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", n);
		else if (i == 1)
			printf(", %ld", m);
		else
		{
			m += n;
			n = m - n;
			printf(", %ld", m);
		}

		++i;
	}

	printf("\n");
	return (0);
}
