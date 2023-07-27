#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number
 *            of elements in a linked list_t list.
 * @h: head of list
 *
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t n = 0;

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
