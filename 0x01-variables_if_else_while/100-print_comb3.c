#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int num = 48, num2;

	while (num <= 57)
	{
		num2 = num + 1;
		while (num2 <= 57)
		{
			putchar (num);
			putchar (num2);
			if (num != 56)
			{
				putchar (',');
				putchar (' ');
			}
			num2++;
		}
		num++;
	}

	putchar ('\n');

	return (0);
}
