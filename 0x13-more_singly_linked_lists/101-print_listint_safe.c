#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - check the code
 * @head: linked list
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int num_nodes = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		num_nodes += 1;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (num_nodes);
}
