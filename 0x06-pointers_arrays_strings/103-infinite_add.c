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
	char carry = 0, temp, sum;
	int i = 0, j = 0, initial = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (0);
	i--;
	j--;
	while (initial < size_r - 1  && (i >= 0 || j >= 0 || carry > 0))
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - 48;
		if (j >= 0)
			sum += n2[j] - 48;
		carry = sum / 10;
		r[initial] = sum % 10 + 48;
		initial++;
		i--;
		j--;
	}
	if (carry > 0 && initial < size_r - 1)
		r[initial++] = carry + '0';
	r[initial] = '\0';
	i = 0;
	initial--;
	while (i < initial)
	{
		temp = r[i];
		r[i] = r[initial];
		r[initial] = temp;
		i++;
		initial--;
	}
	return (r);
}
