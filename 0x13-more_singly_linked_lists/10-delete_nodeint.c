#include "lists.h"
#include <stdlib.h>

/**
 * *delete_nodeint_at_index - delete node at given index
 * @head: address of linked list to delete
 * @index: the index of the node, starting at 0
 * Return: 1 if succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int i = 0;

	if (!temp)
		return (-1);
	while (i < index - 1)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		if (!temp)
			return (-1);
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
