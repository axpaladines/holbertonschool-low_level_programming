#include "main.h"

/**
* _strlen - this is return the length
* @s: this is string
* Return: this is return function
*/

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
