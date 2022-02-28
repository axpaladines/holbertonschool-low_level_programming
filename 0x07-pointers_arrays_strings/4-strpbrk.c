#include "main.h"

/**
* _strpbrk - search a string for any of a set of bytes
* @s: the first occurence in the string 
* @accept: the byte in the string
* Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	return (0);
}
