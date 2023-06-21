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

	if (n < 0)
		n = n * -1;
	l = n % 10;
	_putchar('0' + l);
	return (l);
}
