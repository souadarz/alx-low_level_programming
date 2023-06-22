#include "main.h"

/**
 * print_number - prints a number
 * @n: the number to be printed
 * @displaySize: the dislay size
 *
 * Description: function that prints a number
 * Return: void
 */

void print_number(int n, int displaySize)
{
	int digit, k, nDigit, l, i;

	l = n;
	k = 1;
	nDigit = 0;

	while (l > 0)
	{
		k *= 10;
		nDigit++;
		l = l / 10;
	}

	k = k / 10;

	if (n == 0)
		nDigit = 1;

	for (i = 0; i < displaySize - nDigit; i++)
		_putchar(' ');

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (k >= 1)
	{
		digit = n / k;
		_putchar('0' + digit);
		n = n % k;
		k = k / 10;
	}
}

/**
 * print_times_table -  prints the n times table
 * @n: size of table
 *
 * Description: function that prints the n times table
 * Return: void
 */

void print_times_table(int n)
{
	int c, l, m, s = n, displaySize = 4;

	if (n > 15 || n < 0)
		return;

	for (c = 0; c <= s; c++)
	{
		for (l = 0; l <= s; l++)
		{
			m = c * l;
			if (l > 0)
				print_number(m, displaySize);
			else
				print_number(m, 1);

			if (l != s)
			{
				_putchar(',');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
