#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of _
 *
 * Description: function that draws a straight line in the terminal
 * Return: nothings
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
