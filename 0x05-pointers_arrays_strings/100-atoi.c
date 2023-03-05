#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi -  copies the string pointed to by src to dest
 * @s: pointer to string
 * Return: converted int or 0;
 */
int _atoi(char *s)
{
	int i = 0, digit = 0, sign = 1, num_plus = 0, num_minus = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			num_minus++;
		else if (s[i] == '+')
			num_plus++;
		i++;
	}
	if (num_plus > num_minus || (num_plus == num_minus))
		sign = 1;
	else
		sign = -1;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = digit * 10 + (s[i] - '0');
			i++;
		}
		else
			break;
	}
	if (sign == -1 && (digit > INT_MAX / 10 || (digit == INT_MAX / 10 && digit > -(INT_MIN % 10))))
		return (INT_MIN);
	return (digit * sign);
}
