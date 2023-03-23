#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @ac: number of arguments passed
 * @av: array of arguments passed
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int num, i;
	char (*m);

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(av[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	m = (char *)main;
	for (i = 0; i < num - 1; i++)
		printf("%02hhx ", m[i]);
	printf("%02hhx\n", m[i]);
	return (0);
}
