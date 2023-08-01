#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 *               all the data (n) of a listint_t linked list.
 * @head: the head of a listint_t list
 * Return: the sum of all the data (n) of a listint_t linked list,
 *         or NULL if the list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	for (ptr = head; ptr != NULL; ptr = ptr->next)
	{
		sum += ptr->n;
	}

	return (sum);
}
