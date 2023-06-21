#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: The number to be checked
 *
 * Description: function that print sign of a number
 * Return: 1 if the number is positive. 0 if number is zero. -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
