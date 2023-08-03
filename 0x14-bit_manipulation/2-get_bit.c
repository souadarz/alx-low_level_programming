#include "main.h"
#include <stdlib.h>

/**
 * get_bit - function that returns the value
 *           of a bit at a given index.
 * @n: the number to be converted to binary
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index inde,
 *         or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i, power = 1;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
			n += power;
	}
	return (n);
}
