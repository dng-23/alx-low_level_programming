#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers result
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
		printf("Error\n");
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}
