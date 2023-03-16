#include "main.h"
#include <stdlib.h>

int to_num(char *);
void print_result(int);
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @oldsize: size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer or NULL
 */
int main (int ac, char **av)
{
	long long int num1, num2;
	if (ac != 3)
	{
		printf("Error\n");
		exit (98);
	}

	num1 = to_num(av[1]);
	num2 = to_num(av[2]);
	result = num1 * num2;
	print_result(result);
	return (0);
}

int to_num(char *digit)
{
	int i, len, num = 0;
	for (i = 0; digit[i]; i++)
	{
		if(digit[i] < '0' || digit[i] > '9')
		{
			printf("Error\n");
			exit (98);
		}
		num = (num * 10) + (digit[i] - 48);
	}
	return (num);
}
int print_result(int digit)
{
	num = print_result(digit / 10)
}
