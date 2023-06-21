#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: The character to be checked
 *
 * Description: function that print last digit of a number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
		l = l * -1;
	_putchar(l + '0');
	return (l);
}
