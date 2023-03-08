#include "main.h"
#include <stdio.h>

int sqrt_solution(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root
 * Return: value of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrt_solution(0, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root
 * Return: value of square root
 */
int sqrt_solution(int i, int n)
{
	if (i >= n)
		return (-1);
	else if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		i++;
	}
	else
	{
		i = i / 2;
	}
	return (sqrt_solution(i, n));
}
