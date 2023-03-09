#include "main.h"
#include <stdio.h>
int final_result(char *, int, int);
int len_str(char *s);
/**
 * is_palindrome - check if s is palindrome or not
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = len_str(s);

	if (*s == '\0')
		return (1);
	return (final_result(s, len - 1, len));
}
/**
 * len_str - calculate length of a string
 * @s: the string
 * Return: the length
 */
int len_str(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len_str(s + 1));
}
/**
 * final_result - check for palindrome
 * @s: the string
 * @n: orginal lenth minus one
 * @len: orginal length of the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int final_result(char *s, int n, int len)
{
	if (*s == s[n])
	{
		if ((len % 2 != 0) && n ==  (len - 1) / 2)
			return (1);
		if ((len % 2 == 0) && n == (len / 2))
		{
			if (*s == s[n])
				return (1);
			else
				return (0);
		}
		n--;
	}
	return (final_result(s + 1, n, len));

}







