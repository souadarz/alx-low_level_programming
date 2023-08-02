#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts
 *                            a new node at a given position.
 * @head: the head of a listint_t list
 * @idx:the index of the list where the new node should be added.
 *      index starts at 0.
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *newnode;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	for (i = 0, ptr = *head; i != idx &&  ptr != NULL; i++, ptr = ptr->next)
		;

	if (ptr != NULL)
	{
		newnode->next = ptr->next;
		ptr->next = newnode;
	}

	return (ptr);
}
