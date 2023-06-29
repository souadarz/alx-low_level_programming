#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of the array
 *
 * Description: function that reverses the content of an array of integers
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int j, k;

	for (j = 0; j < n / 2; j++)
	{
		k = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = k;
	}
}
