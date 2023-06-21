#include "main.h"

/**
 * times_table -  prints the 9 times table
 *
 * Description: function that prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int c, l, n;

	for (c = 0; c <= 9; c++)
	{
		for (l = 0; l <= 9; l++)
		{
			n = c * l;
			_putchar('0' + n);

			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('$');
				_putchar('\n');
			}
		}
	}
}
