#include "main.h"

/**
* is_palindrome - return string is a palindrome
* @s: string
* Return: Always 0
*/

int is_palindrome(char *s)
{
	char *s1 = s;

	if (!s)
		return (-1);
	if (!*s)
		return (1);

	while (*(s1 + 1))
		s1++;
	while (s <= s1)
	{
		if (*s == *s1)
			s++, s1--;
		else
			return (0);
	}

	return (1);
}
