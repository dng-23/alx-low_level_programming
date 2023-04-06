#include "main.h"

/**
 * clear_bit - set the value of a bit at a given index.
 * @n: address of number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index == sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
