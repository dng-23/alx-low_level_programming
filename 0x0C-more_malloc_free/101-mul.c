#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int check_valid(char *num);
char *mem_prod(int size);
char *cal_prod(char *, char *, int, char, size_t, size_t);
char *add(char *num1, char *num2, size_t size);
char *mem_realloc(char *, size_t, int);

/**
 * main - multiplies two positive numbers.
 * @ac: number of arguments passed
 * @av: array of arguments passed
 * Return: 0
 */
int main(int ac, char **av)
{
	char *prod1, *prod2, *greater = av[1], *smallest = av[2];
	int res1, res2, count = 0, j = 0;
	size_t len = strlen(av[1]), len2, i, size, k = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	res1 = check_valid(av[1]);
	res2 = check_valid(av[2]);

	if (res1 == -1 || res2 == -1)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(av[2]) > strlen(av[1]))
	{
		greater = av[2];
		smallest = av[1];
		len = strlen(av[2]);
	}
	size = strlen(av[2]) + strlen(av[1]);
	len2 = size - len - 1;
	prod1 =  mem_prod(sizeof(char) * size + 1);
	prod2 =  mem_prod(sizeof(char) * size + 1);
	prod1 = cal_prod(prod1, greater, len, smallest[len2], size, k);
	if (len2 > 0)
	{
		for (i = len2 - 1; i > 0; i--)
		{
			k++;
			prod2 = cal_prod(prod2, greater, len, smallest[i], size, k);
			prod1 = add(prod1, prod2, size);
		}
		if (i == 0)
		{
			k++;
			prod2 = cal_prod(prod2, greater, len, smallest[i], size, k);
			prod1 = add(prod1, prod2, size);
		}
	}
	free(prod2);
	while (prod1[j] == '0')
	{
		count++;
		if (prod1[j + 1] != '0' && prod1[j + 1] != '\0')
		{
			prod1 = mem_realloc(prod1, size - count, count);
			break;
		}
		j++;
	}
	for (j = 0; prod1[j]; j++)
		_putchar(prod1[j]);
	_putchar('\n');
	free(prod1);
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
 * @num: pointer to the multiply
 * @num_size: size of of the multiply
 * @digit: the char element of the multiplier
 * @size: the size of the allocated memory
 * @pos: flag to place the pos of the result in the memory
 * Return: pointer to result
 */
char  *cal_prod(char *arr, char *num, int num_size, char digit,
		size_t size, size_t pos)
{
	int i, res, num1 = 0, num2 = digit - 48;
	size_t final = size;

	for (i = num_size - 1; i >=  0; i--)
	{
		num1 = ((num[i] - 48) * num2) + num1;
		if (num1 > 9)
		{
			res = num1 % 10;
			num1 /= 10;
		}
		else
		{
			res = num1;
			num1 = 0;
		}
		arr[size - pos] = res + '0';
		size--;
	}
	if (num1 > 0)
		arr[size - pos] = num1 + '0';
	while (pos-- > 0)
		arr[final--] = '0';
	return (arr);
}

/**
 * add - add the first two result of the product
 * @num1: the first result to be added
 * @num2: the second result to be added
 * @size: size of the allocated memory
 * Return: Always 0.
 */
char *add(char *num1, char *num2, size_t size)
{
	int digit1, digit2, res, sum = 0;
	size_t i;

	for (i = size; i > 0; i--)
	{
		digit1 = num1[i] - 48;
		digit2 = num2[i] - 48;
		sum = digit1 + digit2 + sum;
		if (sum > 9)
		{
			res = sum % 10;
			sum /= 10;
		}
		else
		{
			res = sum;
			sum = 0;
		}
		num1[i] = res + '0';
	}
	if (i == 0)
	{
		digit1 = num1[i] - 48;
		digit2 = num2[i] - 48;
		sum = digit1 + digit2 + sum;
		if (sum > 9)
		{
			res = sum % 10;
			sum /= 10;
		}
		else
		{
			res = sum;
			sum = 0;
		}
		num1[i] = res + '0';
	}
	return (num1);
}

/**
 * mem_realloc - reallocate memory if there are extra
 * @ptr: memory to reallocate
 * @size: the new size
 * @zeros: position to shift the elements to the new mem
 * Return: pointer to the reallocated memory or NULL.
 */
char *mem_realloc(char *ptr, size_t size, int zeros)
{
	char *new_ptr;
	unsigned int i;

	new_ptr = malloc(size);
	if (!new_ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= size; i++)
		new_ptr[i] = ptr[i + zeros];
	free(ptr);
	return (new_ptr);
}
