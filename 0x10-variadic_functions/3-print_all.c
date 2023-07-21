#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...);
void print_char(va_list n);
void print_int(va_list n);
void print_float(va_list n);
void print_string(va_list n);

/**
 * print_char - prints a character.
 * @n: list of arguments passed to the function
 * Return: nothings
 */

void print_char(va_list n)
{
	char character;

	character = va_arg(n, int);
	printf("%c", character);
}

/**
 * print_int - prints an integer.
 * @n: list of arguments passed to the function
 * Return: nothings
 */

void print_int(va_list n)
{
	int i;

	i = va_arg(n, int);
	printf("%d", i);
}

/**
 * print_float - prints a float.
 * @n: list of arguments passed to the function
 * Return: nothings
 */

void print_float(va_list n)
{
	float f;

	f = va_arg(n, double);
	printf("%f", f);
}

/**
 * print_string - prints a string.
 * @n: list of arguments passed to the function
 * Return: nothings
 */

void print_string(va_list n)
{
	char *str;

	str = va_arg(n, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothings
 */

void print_all(const char * const format, ...)
{
	va_list count;
	unsigned int i, j;
	char *sep;

	ty types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(count, format);

	i = 0;
	sep = "";

	while (format != NULL && format[i])
	{
		j = 0;
		while (types[j].f != NULL)
		{
			if (format[i] == types[j].f[0])
			{
				printf("%s", sep);
				types[j].printer(count);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(count);
}
