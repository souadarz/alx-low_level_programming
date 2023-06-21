#include "main.h"

/**
 * print_number - prints a number
 * @n: the number to be printed
 *
 * Description: function that prints a number
 * Return: void
 */

void print_number(int n)
{
	int digit, k, l;

	l = n;
	k = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (l > 0)
	{
		k *= 10;
		l = l / 10;
	}

	k = k / 10;

	while (k >= 1)
	{
		digit = n / k;
		_putchar('0' + digit);
		n = n % k;
		k = k / 10;
	}
}

/**
 * times_table -  prints the 9 times table
 *
 * Description: function that prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int c, l, n, s = 9;

	for (c = 0; c <= s; c++)
	{
		for (l = 0; l <= s; l++)
		{
			n = c * l;
			print_number(n);

			if (l != s)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
