#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@s: string to capitalize
 *Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char flag[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

	if (n[i] >= 'a' && n[i] <= 'z')
	{
		n[i] = n[i] - 32;
	}

	while (n[i] != '\0')
	{
		for (j = 0; flag[j] != '\0'; j++)
		{
			if (n[i - 1] == flag[j] && n[i] >= 97 && n[i] <= 122)
			{
				n[i] = n[i] - 32;
			}
		}
		i++;
	}
	return (n);
}
