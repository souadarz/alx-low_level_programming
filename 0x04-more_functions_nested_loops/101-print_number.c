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
	unsigned int l, k;

	if (n < 0)
	{
		k = -n;
		_putchar('-');
	} else
		k = n;

	l = k;

	l /= 10;

	if (l != 0)
		print_number(l);

	_putchar(k % 10 + '0');

}
