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
	if (n < 0)
		n = -n;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
