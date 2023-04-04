#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at given index
 * @head: address of linked list to delete
 * @idx: the index of the node, starting at 0
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp2 = *head;
	unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;

	while (i != idx - 1 && temp2 != NULL)
	{
		temp2 = temp2->next;
		i++;
	}
	if (!temp2)
		return (NULL);
	temp->next = temp2->next;
	temp2->next = temp;
	return (temp);
}
