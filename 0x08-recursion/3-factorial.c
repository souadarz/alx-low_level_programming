#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Description: function that returns the factorial of a given number
 * Return: the factorial of n, and -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
