#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - function that returns the number
 *            of elements in a linked list_t list.
 * @head: head of list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;
	list_t *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
