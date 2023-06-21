#include "main.h"

/**
 * print_hour - print hours
 * @minutes: the number of minutes
 *
 * Description:function that prints th hours
 * Return: void
 */

void print_hour(int minutes)
{
	int hour = minutes / 60;

	_putchar('0' + (hour / 10));
	_putchar('0' + (hour % 10));
}

/**
 * print_minute - prints minutes
 * @minutes: the number of minutes
 *
 * Description:function that prints the minutes
 * Return: void
 */

void print_minute(int minutes)
{
	int minute = minutes % 60;

	_putchar('0' + (minute / 10));
	_putchar('0' + (minute % 10));
}

/**
 * jack_bauer - prints every minute of the day
 *
 * Description:function that prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int i;

	for (i = 0; i < 1440; i++)
	{
		print_hour(i);
		_putchar(':');
		print_minute(i);
		_putchar('\n');
	}
}
