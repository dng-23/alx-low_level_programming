#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int num = 48, num2, num3;

	while (num <= 57)
	{
		num2 = num + 1;
		while (num2 <= 57)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				putchar (num);
				putchar (num2);
				putchar (num3);
				if (num != 55)
				{
					putchar (',');
					putchar (' ');
				}
				num3++;
			}
			num2++;
		}
		num++;
	}

	putchar ('\n');

	return (0);
}
