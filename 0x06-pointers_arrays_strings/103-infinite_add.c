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
	int i = 0, j = 0, k = 0, sum, carry = 0;
	char temp;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= size_r || j >= size_r)
		return (0);
	i--;
	j--;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - 48;
		if (j >= 0)
			sum += n2[j] - 48;
		carry = sum / 10;
		r[k] = sum % 10 + '0';
		i--;
		j--;
		k++;
	}
	r[k] = '\0';
	if (k > size_r || (k == size_r && r[0] != '1'))
		return (0);
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
