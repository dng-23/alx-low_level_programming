#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int num = 48, num2, num3 = 48, num4;

	while (num3 <= 57)
	{
		num4 = num3;
		while (num <= 57)
		{
			num2 = num + 1;
			while (num2 <= 57 && num4 <= 57)
			{
				while (num2 <= 57)
				{
					putchar (num3);
					putchar (num);
					putchar (' ');
					putchar (num4);
					putchar (num2);
					if (num3 != 57 || num != 56)
					{
						putchar (',');
						putchar (' ');
					}
					num2++;
				}
				num4++;
				num2 = 48;
			}
			num++;
			num4 = num3;
		}
		num3++;
		num = 48;
	}

	putchar ('\n');

	return (0);
}
