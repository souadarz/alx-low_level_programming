#include "main.h"
#include <stdlib.h>

/**
 * get_bit - function that returns the value
 *           of a bit at a given index.
 * @n: the number to be converted to binary
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index,
 *         or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long value;

	if (index > 63)
		return (-1);
	value = n >> index;
	return (value & 1);
}
