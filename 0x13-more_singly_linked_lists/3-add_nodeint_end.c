#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end.
 * @head: address of linked list pointer
 * @n: element of the new added
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1, *temp2 = *head;

	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;
	temp1->next = NULL;

	if (temp2 == NULL)
		*head = temp1;
	else
	{
		while (temp2->next)
			temp2 = temp2->next;
		temp2->next = temp1;
	}
	return (*head);
}
