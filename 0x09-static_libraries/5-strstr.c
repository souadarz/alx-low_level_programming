#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: substring
 *
 * Description: function that locates a substring
 * Return: char if the substring is found,otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				for (; needle[j] != '\0'; j++)
				{
					if (haystack[i + j] != needle[j])
						break;
				}
				if (needle[j] == '\0')
					return (haystack + i);
			}
		}
	}
	return (NULL);
}
