#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @ac: number of arguments passed
 * @av: array of arguments passed
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int num1, num2, res;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	printf("num1= %d num2= %d\n", num1, num2);
	if (*av[2] != '+' && *av[2] != '-' && *av[2] != '/'
			&& *av[2] != '*' && *av[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*av[2] != '/' || *av[2] != '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(av[2])(num1, num2);
	printf("%d\n", res);

	return (0);
}
