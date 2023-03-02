#include "main.h"
#include <stdio.h>
/**
 * print_buffer -  prints a buffer
 * @b: buffer to be printed
 * @size: size byte of buffer to be printed
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, n = 0;

	while (b[i] != '\0' || i < size)
	{
		printf("%08x: ", i);
		while (j < 10)
		{
			printf("%02x", b[j + i]);
			if (j % 2 != 0)
				printf(" ");
			j++;
		}
		while (n < 10)
		{
			if (b[i] >= 31 && b[i] <= 126)
				printf("%c", b[i]);
			else
				printf(".");
			i++;
			n++;
			j = 0;
		}
		n = 0;
		printf("\n");
	}
}
