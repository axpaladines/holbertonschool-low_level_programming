#include "main.h"
#include <stdlib.h>

/**
* array_range - create an array of integers ordered
* @min: first value of the array
* @max: last value of the array
*
* Return: pointers
*/

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
