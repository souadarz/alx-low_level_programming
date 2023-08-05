#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int n = 0x11223344;
	char *n_string = (char *)&n;

	if (*n_string == 0x11)
		return (0);

	else
		return (1);
}
