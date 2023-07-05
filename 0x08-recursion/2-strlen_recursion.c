#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: string
 *
 * Description: function that returns the length of a string
 * Return: the length of sting
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
