#include "main.h"
#include <stdlib.h>

/**
* _calloc - replicate calloc funtion
* @size: size of each element
* @nmemb: number of members
*
* Return: Always 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ('\0');

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;
	return (s);
}
