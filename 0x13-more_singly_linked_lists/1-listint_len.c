#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that returns the number
 *                 of element in a linked lsitint_t list
 * @h: the head of listint_t list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t nbr_nodes;

	ptr = h;

	for (nbr_nodes = 0; ptr != NULL; nbr_nodes++)
	{
		ptr = ptr->next;
	}
	return (nbr_nodes);
}
