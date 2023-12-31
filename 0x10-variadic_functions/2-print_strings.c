#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_strings - function that prints strings
 * @separator: is the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 * Return: nothings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i;
	char *s;

	va_start(count, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(count, char *);

		if (s)
			printf("%s", s);

		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(count);
}
