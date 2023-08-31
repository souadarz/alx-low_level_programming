#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to be printed on binary representation
 *
 * Return: nothings
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i, number_bits = 0;

	if (n == 0)
		_putchar('0');
	temp = n;

	while (temp)
	{
		temp = temp >> 1;
		number_bits++;
	}
	temp = n;

	for (i = number_bits - 1; i >= 0; i--)
	{
		if (((temp >> i) & 1) == 1)
			_putchar('1');

		else
			_putchar('0');

	}
}
