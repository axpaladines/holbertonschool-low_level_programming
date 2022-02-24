#include "main.h"

/**
* string_toupper - changes all lowercase
* @s: string modify
* Return: s with modify
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
