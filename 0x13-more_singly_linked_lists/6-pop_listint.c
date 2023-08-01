#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 *               of a listint_t linked list.
 * @head: double pointer to a head
 * Return: the head node’s data (n),
 *         and 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptr;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	else
	{
		ptr = *head;
		n = ptr->n;
		temp = ptr->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
