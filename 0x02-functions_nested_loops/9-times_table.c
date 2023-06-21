#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Description: prints 10 times alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	i++;
	}
}
