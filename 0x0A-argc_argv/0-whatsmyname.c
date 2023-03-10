#include "main.h"

/**
 * main - prints the programs name
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[0][i])
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
