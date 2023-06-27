#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string
 * @str:string to be printed
 *
 * Desciption: function that prints every other character of a string
 * Return: Always 0
 */

void puts2(char *str)
{

	int i;
	int j = _strlen(str);

	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);

	}
	_putchar('\n');
}
