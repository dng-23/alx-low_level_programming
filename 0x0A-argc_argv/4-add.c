#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints addition of numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, num;
	size_t j = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			while (j < strlen(argv[i]))
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			j = 0;
			num = atoi(argv[i]);
			sum += num;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
