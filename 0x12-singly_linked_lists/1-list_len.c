#include "lists.h"

/**
 * list_len - count number of elements in a linked list_t list
 * @h: linked list
 * Return: the result
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		temp = h->next;
	}
	return (num_nodes);
}
