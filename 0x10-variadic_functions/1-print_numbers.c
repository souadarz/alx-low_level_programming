#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_numbers - function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothings
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i;

	if (n == 0)
		return;
	va_start(count, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(count, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(count);
}
