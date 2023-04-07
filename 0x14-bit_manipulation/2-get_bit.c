#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index.
 * @n: number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1, i = 0;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	while (i < index)
	{
		mask = mask << 1;
		i++;
	}
	if ((n & mask) == 0)
		return (0);
	return (1);
}
