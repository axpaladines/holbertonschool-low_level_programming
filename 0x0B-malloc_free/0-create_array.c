#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - create an array of chars
* @size: the size of the memory
* @c: the number of memory
*
* Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
