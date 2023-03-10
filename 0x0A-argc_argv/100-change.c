#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make chg for amount of money.
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num, i, coins[] = {25, 10, 5, 2, 1}, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			if (num >= coins[i])
			{
				num -= coins[i];
				count++;
				i--;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
