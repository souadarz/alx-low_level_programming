#include "main.h"

/**
 * _puts -  prints a string
 * @str: the integer to be computed
 *
 * Desciption:  function that prints a string
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
