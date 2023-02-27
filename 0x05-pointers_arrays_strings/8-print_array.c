#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an arr of integers, followed by a new line
 * @a: pointer to array
 * @n: number of elements to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	while (n > 0)
	{
		printf("%i", *a);
		if (n - 1 > 0)
			printf(", ");
		a++;
		n--;
	}
	printf("\n");
}
