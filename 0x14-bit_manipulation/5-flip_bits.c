#include "main.h"

/**
 * flip_bits - set the value of a bit at a given index.
 * @n: first number to check
 * @m: second number to check
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_flip = 0, flip = n ^ m;

	while (flip != 0)
	{
		num_flip++;
		flip &= (flip - 1);
	}
	return (num_flip);
}
