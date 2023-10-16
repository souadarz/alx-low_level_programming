#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The number to be checked
 *
 * Description: function that computes the absolute value of an integer
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	return (0);
}
