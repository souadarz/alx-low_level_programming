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
	int l, digit, k = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	l = n;

	while (l >= 10)
	{
		l = l / 10;
		k = k * 10;
	}

	while (k >= 1)
	{
		digit = n / k;
		_putchar('0' + digit);
		n = n % k;
		k = k / 10;
	}
}
