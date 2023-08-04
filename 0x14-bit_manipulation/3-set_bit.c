#include "main.h"
#include <stdlib.h>

/**
 * set_bit - function that sets the value of a bit
 *                  to 1 at a given index.
 * @n: pointer to the number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int power = 1;

	if (index > 63)
		return (-1);

	for ( ; index > 0; index--)
	{
		power *= 2;
	}

	*n += power;
	return (1);
}
