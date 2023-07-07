#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * @n: size of memory to be set
 * @s: pointer
 * @b: byte value to be filled with
 *
 * Description: function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *t = s;

	for (i = 0; i < n; i++)
	{
		if (t == 0)
			break;
		*t = b;
		t++;
	}
	return (s);
}
