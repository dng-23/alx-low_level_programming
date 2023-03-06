#include "main.h"
#include <stdio.h>

/**
 * print_diagsums: prints the sum of 2 diagonals of a square matrix of int
 * @a: square matrix
 * @size: size of an array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0, j = 0;
	int increase = size + 1;

	while (size)
	{
		sum1 += *(a + i);
		sum2 += *(a + (size - 1 - j) + i);
		size--;
		j++;
		i += increase;
	}
	printf("%d, %d\n", sum1, sum2);
}
