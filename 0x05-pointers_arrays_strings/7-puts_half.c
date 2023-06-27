#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the half of a string
 * @str:string to be printed
 *
 * Desciption: function that prints seconde half of a string
 * Return: Always 0
 */

void puts_half(char *str)
{

	int i, j;

	i = _strlen(str);

	if (i % 2 == 0)
		j = i / 2;

	else
	{
		j = (i + 1) / 2;
	}

	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
