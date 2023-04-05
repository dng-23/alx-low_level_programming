#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the listint_t list
 * @head: linked list to free
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	list_t *del;

	while (head)
	{
		del = head;
		head = head->next;
		free(del);
	}
}
