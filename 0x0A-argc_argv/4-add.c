#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, num;

	if (argc < 2)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			num = atoi(argv[i]);
			if (num == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
