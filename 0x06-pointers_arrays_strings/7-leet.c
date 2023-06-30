#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Description:  function that encodes a string into 1337
 * Return: char
 */

char *leet(char *str)
{
	int i, j;
	char let[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = let[j + 1];
				break;
			}
		}
	}
	return (str);
}
