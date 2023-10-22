#include <stdio.h>
#include "lists.h"

/*
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head of doubly linked list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i = 0;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
