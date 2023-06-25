#include "main.h"

/**
 * print_number - prints a number
 * @n: the number to be printed
 *
 * Description: function that prints an integer
 * Return: void
 */

void print_number(int n)
{
	int l, k, nDigit, digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	l = n;
	k = 1;
	nDigit = 0;

	if (n == 0)
		_putchar('0');

	while (l > 0)
	{
		k *= 10;
		nDigit++;
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
