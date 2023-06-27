#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s:string to reverse
 *
 * Desciption: function that reveres a string
 * Return: Always 0
 */

void rev_string(char *s)
{
	char k;
	int i;
	int j = _strlen(s);

	for (i = 0; i < j / 2; i++)
	{
		k = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = k;
	}
}
