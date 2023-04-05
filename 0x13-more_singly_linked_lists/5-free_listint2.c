#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the listint_t list
 * @head: linked list to free
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *del;

	while (*head)
	{
		del = *head;
		*head = *head->next;
		free(del);
	}
}
