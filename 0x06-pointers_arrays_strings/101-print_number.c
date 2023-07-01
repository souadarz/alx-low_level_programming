#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Description:  function that prints an integer
 * Return: nothings
 */

void print_number(int n)
{
	int digit, k = 1;
	unsigned int l, m;

	if (n < 0)
	{
		_putchar('-');
		l = -n;
	}
	else
		l = n;
	m = l;

	while (l >= 10)
	{
		l = l / 10;
		k = k * 10;
	}

	while (k >= 1)
	{
		digit = m / k;
		_putchar('0' + digit);
		m = m % k;
		k = k / 10;
	}
}
