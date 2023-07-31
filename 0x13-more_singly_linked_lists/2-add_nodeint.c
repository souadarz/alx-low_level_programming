#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - function that adds a new node
 *             at the beginning of a listint_t list.
 * @head: double pointer to a head
 * @n:
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
