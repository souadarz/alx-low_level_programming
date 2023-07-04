#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: Two dimensional Array of type int
 * @size: size of array
 *
 * Description: function that prints the sum of the two diagonals,
 * of a square matrix of integers
 * Return: nothings
 */

void print_diagsums(int *a, int size)
{
	int i;
	int SumDiagonal1 = 0;
	int SumDiagonal2 = 0;

	for (i = 0; i < size; i++)
	{
		SumDiagonal1 += a[(i * size) + i];
		SumDiagonal2 += a[(size - 1) * (i + 1)];
	}
	printf("the sum of the first diagonal is %d\n", SumDiagonal1);
	printf("the sum of the seconde diagonal is %d\n", SumDiagonal2);
}
