#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: header of the list
 * Return: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i = 0;

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
