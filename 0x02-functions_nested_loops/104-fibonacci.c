#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;
	unsigned long int i = 1, j = 2, sum;

	while (n < 98)
	{
		printf("%ld", i);
		if (n != 97)
			printf(", ");
		sum = i;
		i = j;
		j += sum;
		n++;
	}
	printf("\n");
	return (0);
}
