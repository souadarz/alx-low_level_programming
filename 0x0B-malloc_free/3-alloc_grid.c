#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 *              array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2 dimentional array of integers,
 * return NULL on failure and if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **twodmarray;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twodmarray = malloc(sizeof(int *) * height);

	if (twodmarray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twodmarray[i] = malloc(sizeof(int) * width);

		if (twodmarray[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(twodmarray[i]);

			free(twodmarray);
			return (NULL);
		}
	}
	return (twodmarray);
}
