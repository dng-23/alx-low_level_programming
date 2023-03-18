#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int check_valid(char *num);
char *mem_prod(int size);
char *cal_prod(char *, char *, int, char *, int, int);

/**
 * main - multiplies two positive numbers.
 * @ac: number of arguments passed
 * @av: array of arguments passed
 * Return: 0
 */
int main(int ac, char **av)
{
	char *prod, *greater = av[1], *smallest = av[2];
	int i = 0, len1 = strlen(av[1]), len2 = strlen(av[2]), size;

	if (ac != 3 || check_valid(av[1]) == -1 || check_valid(av[2]) == -1)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(av[2]) > strlen(av[1]))
	{
		greater = av[2];
		smallest = av[1];
		len1 = strlen(av[2]);
		len2 = strlen(av[1]);
	}
	size = strlen(av[2]) + strlen(av[1]);
	prod =  mem_prod(sizeof(char) * (size + 1));
	prod = cal_prod(prod, greater, len1, smallest, len2, size);
	while (prod[i] == '0' && i < size)
		i++;
	if (i == size)
		putchar('0');
	else
	{
		for (; i < size; i++)
			putchar(prod[i]);
	}
	putchar('\n');
	free(prod);
	return (0);
}

/**
 * check_valid - check if the argument passed is only number
 * @num: string to check
 * Return: 1 if correct else -1
 */
int check_valid(char *num)
{
	int i = 0;

	while (num[i])
	{
		if (num[i] < '0' || num[i] > '9')
			return (-1);
		i++;
	}
	return (1);
}

/**
 * mem_prod - allocate memory to store product of the numbers
 * @size: size to allocate
 * Return: pointer to allocated memory.
 */
char *mem_prod(int size)
{
	char *ptr;
	int i;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = '0';

	return (ptr);
}

/**
 * cal_prod - calculate the multiplication of the numbers
 * @arr: char pointer to store the result
 * @num1: pointer to the multiply
 * @len1: size of of the multiply
 * @num2: pointer to the multiplier
 * @len2: size of of the multiplier
 * @size: the size of the allocated memory
 * Return: pointer to result
 */
char  *cal_prod(char *arr, char *num1, int len1, char *num2,
		int len2, int size)
{
	int i, j, sum, digit1, digit2, carry, k;

	for (i = len2 - 1; i >=  0; i--)
	{
		digit2 = num2[i] - '0';
		carry = 0;
		k = size - (len2 - i);
		for (j = len1 - 1; j >= 0; j--)
		{
			digit1 = num1[j] -'0';
			sum = (digit1 * digit2) + carry + (arr[k] - '0');
			carry = sum / 10;
			arr[k] = (sum % 10) + '0';
			k--;
		}
		if (carry > 0)
			arr[k] = (carry + (arr[k] - '0')) + '0';
	}
	return (arr);
}
