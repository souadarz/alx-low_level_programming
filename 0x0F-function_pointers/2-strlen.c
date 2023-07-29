#include "3-calc.h"

/**
 * _strlen - returns the length of a string
 * @s: character to be computed
 *
 * Desciption: function that returns the length of a string
 * Return: lenghth of string
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{}

	return (j);
}
