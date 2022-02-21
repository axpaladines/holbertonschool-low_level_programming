#include "main.h"

/**
* _strcpy - copies string pointed to by src
* @src: source to copy
* @dest: destination of copy
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
