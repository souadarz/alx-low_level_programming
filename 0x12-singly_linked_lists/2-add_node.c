#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - function that adds a new node
 *             at the beginning of a list_t list.
 * @head: double pointer to a head
 * @str: the string to add a new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *str1;
	unsigned int i;

	if (str == NULL)
	{
		ptr = malloc(sizeof(list_t));
		ptr->str = NULL;
		ptr->len = 0;
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}

	str1 = strdup(str);

	for (i = 0; str1[i] != '\0'; i++)
		;
	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = str1;

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
