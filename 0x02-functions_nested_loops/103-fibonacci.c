#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, sum = 0, even = 0;

	while (i < 4000000)
	{
		if (j % 2 == 0)
			even += j;
		sum = i;
		i = j;
		j += sum;
	}
	printf("%d\n", even);
	return (0);
}
