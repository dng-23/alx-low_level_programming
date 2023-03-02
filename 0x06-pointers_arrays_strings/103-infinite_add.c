#include "main.h"
#include <stdio.h>
/**
 * infinite_add -  adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: the rsult buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char carry, sum, first, second;
	int i = 0, j = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= size_r || j >= size_r)
		return (0);
	if (i > j)
		size_r = size_r - (size_r - 1 - i);
	else
		size_r = size_r - (size_r - 1 - j);
	i--;
	j--;
	while (size_r > 0)
	{
		first = n1[i];
		second = n2[j];
		if (i < 0)
			first = '0';
		if (j < 0)
			second = '0';
		if (i < 0 && j < 0)
			break;
		if (carry == '1')
		{
			sum = (first + carry) - 48;
			first = sum;
			carry = '0';
			if (sum > 57)
			{
				sum -= 10;
				first = sum;
				carry = '1';
			}
		}
		sum = (first + second) - 48;
		if (sum > 57)
		{
			sum -= 10;
			carry = '1';
		}
		r[size_r - 1] = sum;
		size_r--;
		i--;
		j--;
	}
	if (carry == '1')
	{
		if (size_r != 0)
			r[size_r - 1] = carry;
		else
			return (0);
	}
	return (r);
}
