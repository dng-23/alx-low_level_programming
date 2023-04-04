#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of linked list to delete
 * Return: returns the head node’s data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
