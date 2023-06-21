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
	while (n <= 98)
	{
		if (n < 98)
			printf("%d, ", n);
		else
		{
			printf("%d", n);
			printf("\n");
		}
		n++;
	}
	while (n >= 98)
	{
		if (n > 98)
			printf("%d, ", n);
		else
		{
			printf("%d", n);
			printf("\n");
		}
		n--;
	}
}
