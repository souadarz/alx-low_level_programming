#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *reverse_listint - function that deletes the head node
 *               of a listint_t linked list.
 * @head: double pointer to a head
 * Return: the head node’s data (n),
 *         and 0 if the linked list is empty
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *temp;

	if (*head != NULL)
	{
		for (ptr = *head; *head != NULL; *head = (*head)->next)
		{
			ptr->next = temp;
			temp = ptr;
		}
		*head = temp;
		return (*head);
	}
	return (NULL);
}
