#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - delete node at given index
 * @head: address of linked list to delete
 * @index: the index of the node, starting at 0
 * Return: 1 if succeeded or -1 if failed
 */
listint_t *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int i = 0;
	
	while (i != index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	temp2 = temp;
	temp = temp->next;
	free(temp2);
	return (-1);
}
