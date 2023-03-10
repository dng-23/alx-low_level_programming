#include "main.h"

/**
 * main - prints all aruments it recieves
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		_putchar(argv[i]);
		_putchar('\n');
		i++;
	}
	return (0);
}
