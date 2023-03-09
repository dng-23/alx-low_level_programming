#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - check if n is prime number or not
 * @n: number to get square root
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (1);
	if (n == 1 || n == 2)
		return (0);
	return (check_prime(2, n));
}

/**
 * check_prime - check if n is prime
 * @i: number increament start from 2
 * @n: number to be checked
 * Return: 1 or 0
 */
int check_prime(int i, int n)
{
	if (n % i != 0)
		i++;
	else if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (check_prime(i, n));
}
