#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character to be computed
 *
 * Desciption: function that returns the length of a string
 * Return: lenghth of string
 */

unsigned int _strlen(char *s)
{
	unsigned int j;

	for (j = 0; s[j] != '\0'; j++)
	{}

	return (j);
}
