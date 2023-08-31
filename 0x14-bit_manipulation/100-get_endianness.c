 #include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 11223344;
	char *str_dup_n = (char *)&n;

	if (*str_dup_n == 0x11)
		return (0);

	else
		return (1);
}
