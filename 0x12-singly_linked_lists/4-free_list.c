#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @h: linked list to free
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head, *del;

	while (temp->next)
	{
		del = temp;
		temp = temp->next;
		free(del->str);
		free(del);
	}
	free(temp->str);
	free(temp);
}
