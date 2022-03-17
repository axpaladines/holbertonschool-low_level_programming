#include "function_pointers.h"

/**
* array_iterator - function that executes a functiion
* @array: numbers array
* @size: size
* @action: function name
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
