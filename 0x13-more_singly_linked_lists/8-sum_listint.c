#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - calculate sum of all nodes data
 * @head: linked list
 * Return: the sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0

	while (head)
	{
		sum += head->n;
		h = h->next;
	}
	return (sum);
}
