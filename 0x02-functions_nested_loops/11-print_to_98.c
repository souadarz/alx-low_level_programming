#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints numbers from n to 98
  * @n: The number to be computed
  *
  * Description: function that prints all natural numbers from n to 98
  * Return: void
  */
void print_to_98(int n)
{
	int step, i;

	if (n >= 98)
		step = -1;
	else
		step = 1;

	for (i = n; step * (98 - i) >= 0; i += step)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d\n", i);
	}
}
