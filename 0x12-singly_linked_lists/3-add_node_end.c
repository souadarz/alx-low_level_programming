#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - function that adds a new node
 *             at the end of a list_t list.
 * @head: double pointer to a head
 * @str: the string to add a new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *new_node;
	char *str1;
	unsigned int i;

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	str1 = strdup(str);

	for (i = 0; str1[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = str1;
	new_node->len = i;
	new_node = NULL;

	if (ptr)
		ptr->next = new_node;

	else
		*head = new_node;
	return (new_node);
}
