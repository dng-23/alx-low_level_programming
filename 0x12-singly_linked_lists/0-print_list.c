#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t num_nodes = 0;

	while (temp->next)
	{
		if (temp->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		num_nodes++;
		temp = h->next;
	}
	num_nodes++;
	printf("[%d] %s\n", temp->len, temp->str);
	return (num_nodes);
}
