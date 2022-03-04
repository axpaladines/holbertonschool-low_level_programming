#include "main.h"

/**
* *to_end - function
* @s: sting
* Return: Always 0
*/

char *to_end(char *s)
{
	if (!*(s + 1))
		return (s);
	return (to_end(s + 1));
}

/**
* is_palindrome_out - funtion
* Return: Always 0
* @s: string one
* @s1: string two
*/

int is_palindrome_out(char *s, char *s1)
{
	if (*s != *s1)
		return (0);
	if (s >= s1)
		return (1);
	return (is_palindrome_out(s + 1, s1 - 1));
}


/**
* is_palindrome - return string is a palindrome
* @s: string
* Return: Always 0
*/

int is_palindrome(char *s)
{
	char *s1;

	if (!s)
		return (-1);
	if (!*s)
		return (1);
	s1 = to_end(s);

	return (is_palindrome_out(s, s1));
}
