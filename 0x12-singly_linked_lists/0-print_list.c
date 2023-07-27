#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: head of list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t n = 0;

	ptr = h;

	while (ptr != NULL)
	{
		if (!ptr->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
