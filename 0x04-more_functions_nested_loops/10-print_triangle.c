#include "main.h"

/**
 * print_triangle - prints triangle
 *@size: size of triangle
 * Description: function that prints the numbers
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');

		for (j = 1; j <= i; j++)
			_putchar('#');

		if (i < size)
			_putchar('\n');
	}
	_putchar('\n');
}
