#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: returns the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list count;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(count, n);

	for (i = 0; i < n; i++)
		sum += va_arg(count, int);
	va_end(count);
	return (sum);
}
