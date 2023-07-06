#include "main.h"
#include "2-strlen_recursion.c"

/**
 * palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @i: number to be incremented, starting on the left of the string
 * @j: number to be decremented, starting on the right of the string
 *
 * Description: function that checks if a string is a  palindrome
 * Return: 1 if s is a palindrome, otherwise 0
 */

int palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	else if (s[i] == s[j])
		return (palindrome(s, i + 1, j - 1));

	else
		return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be tested
 *
 * Description: function that returns 1 if a string
 * is a palindrome and 0 if not
 * Return: 1 s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s) - 1;

	if (length == 0 || length == 1)
		return (1);
	return (palindrome(s, 0, length));
}
