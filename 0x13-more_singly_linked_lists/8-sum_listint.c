#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - calculate sum of all nodes data
 * @head: linked list
 * Return: the sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
