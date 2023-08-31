#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 *             you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_to_flip = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
		{
			bits_to_flip++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (bits_to_flip);
}
