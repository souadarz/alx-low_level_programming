#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return:  returns the index of the first element
 * for which the cmp function does not return 0.
 * return -1 if size <= 0 or if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
