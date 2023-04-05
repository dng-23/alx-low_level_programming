#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - find given node
 * @head: address of linked list to delete
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i != index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
