#include "lists.h"

/**
 * list_len - count number of elements in a linked list_t list
 * @h: linked list
 * Return: the result
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t num_nodes = 0;

	while (temp->next)
	{
		num_nodes++;
		temp = h->next;
	}
	num_nodes++;
	return (num_nodes);
}
