#include "main.h"

/**
 * cap_string - copies a string
 * @str: string to be copie
 *
 * Description: function that copies a string
 * Return: char
 */

char *cap_string(char *str)
{
	int i, j;
	int foundSep = 1;
	char sep[] = ",;.!?\"(){}\n\t\" ";

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (foundSep)
				str[i] -= 'a' - 'A';
		}

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				foundSep = 1;
				break;
			}

			if (str[i] != sep[j])
				foundSep = 0;
		}
	}

	return (str);
}
