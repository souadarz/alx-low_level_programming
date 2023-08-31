 #include "main.h"

/**
 * clear_bit - function that sets the value of a
 *           bit to 0 at a given index.
 * @n: pointer to a string of 0 and 1 chars
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number, power = 1;
	unsigned int i;

	if (index > 63)
		return (-1);
	i = index;

	for ( ; i > 0; i--)
	{
		power *= 2;
	}
	number = *n >> index;

	if (number & 1)
		*n -= power;
	return (1);
}
