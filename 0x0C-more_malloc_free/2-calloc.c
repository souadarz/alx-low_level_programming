#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that allocates memory for an array.
 * @nmemb: numbers of elements of array
 * @size: number of bytes of an element
 *
 * Return: returns a pointer to the allocated memory, or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	s = ptr;

	for (i = 0; i < (nmemb * size); i++)
	{
		s[i] = '\0';
	}
	return (ptr);
}
