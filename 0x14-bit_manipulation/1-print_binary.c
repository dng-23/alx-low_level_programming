#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - prints the binary representation of a number
 * @n: number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 1, i = 0, shift = 0, num = n;

	while (num > 1)
	{
		num = num >> 1;
		shift++;
	}
	mask = 1 << shift;
	while (i < shift + 1)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
		i++;
	}
}
