#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143, i = 2, j, prime = 0, count = 0;

	while (i < num)
	{
		if (num % i == 0)
		{
			num = num / i;
			for (j = 2; j <= i; j++)
			{
				if (i % j == 0)
					count++;
				if (count > 1)
					break;
			}
			if (count == 1 && i > prime)
				prime = i;
			count = 0;
			i = 1;
		}
		i++;
	}
	if (num > prime)
		prime = num;
	printf("%ld\n", prime);
	return (0);
}
