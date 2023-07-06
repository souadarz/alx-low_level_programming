#include "main.h"

/**
 * square_root - returns the square root of a number
 * @k: test number
 * @x: number to get square root of
 *
 * Description: function that returns the natural square root of a number
 * Return: the square root
 */

int square_root(int k, int x)
{
	if (k * k == x)
		return (k);

	if (k * k > x)
		return (-1);

	return (square_root(k + 1, x));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root of
 *
 * Description: function that returns the natural square root of a number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (square_root(1, n));
}
