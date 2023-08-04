#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits needed to flip
 * to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
		{
			flips += 1;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (flips);
}
