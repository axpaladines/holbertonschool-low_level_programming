#include "main.h"
#include <stddef.h>

/**
* _strpbrk - search a string for any of a set of bytes
* @s: the first occurence in the string
* @accept: the byte in the string
* Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *rt;

	rt = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				rt = &s[i];
				break;
			}
		}
		if (rt != NULL)
			break;
	}
	return (rt);
}
