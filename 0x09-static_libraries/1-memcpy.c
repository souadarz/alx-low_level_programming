#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: number of bytes to be copied
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 *
 * Description: function copies n bytes from memory
 * area src to memory area dest
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (dest == 0 || src == 0)
			break;
		*(dest + i) = *(src + i);
	}

	return (dest);
}
