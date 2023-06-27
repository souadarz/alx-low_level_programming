#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the half of a string
 * @str:string to be printed
 *
 * Desciption: function that prints every other character of a string
 * Return: Always 0
 */

void puts_half(char *str)
{

	int i, j;

	for (i = 1; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			j = i / 2;

		else
		{
			j = (i - 1) / 2;
			j += 1;
		}
	}
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
