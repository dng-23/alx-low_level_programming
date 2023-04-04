#include "lists.h"
#include <stdio.h>

/**
 * listint_len - travrse through linked list
 * @h: linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
