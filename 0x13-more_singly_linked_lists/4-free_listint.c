#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that free a lsitint_t list
 * @head: the head of listint_t list
 * Return: nothings
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
