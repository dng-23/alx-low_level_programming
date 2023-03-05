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
	int i = 0, digit = 0, sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		++i;
	}
	for (; str[i] >= '0' && str[i] <= '9'; ++i)
		digit = digit * 10 + (str[i] - '0');
	return (digit * sign);
}
