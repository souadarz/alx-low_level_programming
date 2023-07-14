#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min value of integers
 * @max: max value of integers
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1) && (min + i) <= max; i++)
	{
		ptr[0] = min;
		ptr[i] = min + i;
	}
	return (ptr);
}
