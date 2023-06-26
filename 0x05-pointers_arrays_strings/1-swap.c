#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first integer to be computed
 * @b: the seconde integer to be computed
 *
 * Desciption:function that swaps the values of two integers
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int k = *a;

	*a = *b;
	*b = k;
}
