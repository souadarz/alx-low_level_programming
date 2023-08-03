#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that prints the binary
 *                 representation of a number.
 * @n: number to be converted to binary representation
 * Return: nothings.
 */

void print_binary(unsigned long int n)
{
	unsigned int long value;
	int i, number_of_bits = 0;

	if (n == 0)
		_putchar('0');

	value = n;

	while (value)
	{
		value = value >> 1;
		number_of_bits++;
	}

	value = n;

	for (i = number_of_bits - 1; i >= 0; i--)
	{
		if (((value >> i) & 1) == 1)
			_putchar('1');

		else
			_putchar('0');
	}
}
