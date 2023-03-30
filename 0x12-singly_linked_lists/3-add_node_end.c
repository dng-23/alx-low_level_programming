#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp1, *temp2 = *head;

	temp1 = malloc(sizeof(list_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->str = strdup(str);
	temp1->len = strlen(str);
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
