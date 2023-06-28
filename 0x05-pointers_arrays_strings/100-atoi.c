#include "main.h"

/**
 * *_atoi -  convert a string to an integer
 * @s: a pointer of string to be convert
 *
 * Desciption: function that convert a string to an integer
 * Return: value of integer otherwise 0
 */

int _atoi(char *s)
{
	unsigned int number = 0;
	int i, numberFound = 0;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = number * 10 + (s[i] - '0');
			numberFound = 1;
		}

		else if (s[i] == '-' && !numberFound)
			sign *= -1;

		else if (numberFound)
			break;
	}

	if (numberFound)
		return (sign * number);
	return (0);
}
