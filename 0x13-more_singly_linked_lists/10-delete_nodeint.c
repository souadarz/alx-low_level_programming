#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index- function that deletes the node
 *                 at index index of a listint_t linked list.
 * @head: double pointer to a head
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr;
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	for (count = 0; count != index; count++)
	{
		ptr = temp;
		ptr = ptr->next;
		if (ptr == NULL)
			return (-1);
	}
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
