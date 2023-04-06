#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - check the code
 * @head: linked list
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
