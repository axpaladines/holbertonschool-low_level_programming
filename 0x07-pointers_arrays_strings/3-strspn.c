#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: bytes in the initial segment
* @accept: consist only of bytes
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
