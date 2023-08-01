#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node
 *                         of a listint_t linked list.
 * @head: the head of a listint_t list
 * @index:the index of the node, starting at 0
 * Return: the nth node of a listint_t list,
 *         or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	for (i = 0, ptr = head; i != index &&  ptr != NULL; i++, ptr = ptr->next)
		;

	return (ptr);
}
