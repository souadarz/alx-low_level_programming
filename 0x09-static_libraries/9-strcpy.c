#include "main.h"

/**
 * *_strcpy - copie a string
 * @dest: destination to copy
 * @src: a pointer of string to be copied
 *
 * Desciption: function that copies the string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
