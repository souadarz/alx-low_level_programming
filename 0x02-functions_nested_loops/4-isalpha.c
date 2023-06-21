#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Description: function that checks for alphabetic character
 * Return: 1 if the charcter is alphabetic. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
