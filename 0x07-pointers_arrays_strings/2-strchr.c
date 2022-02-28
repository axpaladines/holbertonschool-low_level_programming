#include "main.h"

/**
* _strchr - locate a character in a string
* @s: first occurrence of the character
* @c: in the string
* Return: char c in s or NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
