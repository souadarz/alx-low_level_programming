#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Description: function that checks for lowercase character
 * Return: 1 if the charcter is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
