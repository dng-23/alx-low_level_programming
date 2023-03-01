#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _atoi -  copies the string pointed to by src to dest
 * @s: pointer to string
 * Return: converted int or 0;
 */
int _atoi(char *s)
{
	int i = 0, digit = 0, count = 0, p, num = 1, index, sign = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			index = i;
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (s[i - 1] == '-')
					sign = 1;
				count++;
				i++;
			}
			break;
		}
		i++;
	}
	count--;
	p = count;
	while (p > 0)
	{
		num *= 10;
		p--;
	}
	while (count + 1)
	{
		digit = ((s[index] - 48) * num) + digit;
		count--;
		index++;
		num /= 10;
	}
	if (sign == 1)
		digit *= -1;
	return (digit);
}
