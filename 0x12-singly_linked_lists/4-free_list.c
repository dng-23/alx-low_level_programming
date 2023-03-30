#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: linked list to free
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *del;

	while (head)
	{
		del = head;
		head = head->next;
		free(del->str);
		free(del);
	}
}
