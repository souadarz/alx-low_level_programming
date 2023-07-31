#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints the element of lsitint_t list
 * @h: the head of listint_t list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t nbr_nodes;

	ptr = h;

	for (nbr_nodes = 0; ptr != NULL; nbr_nodes++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (nbr_nodes);
}
