#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that free a listint_t list
 * @head: the head of listint_t list
 * Description: function that free a listint_t list
 *              and sets the head to NULL
 * Return: nothings
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = *head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
		*head = NULL;
	}
}
