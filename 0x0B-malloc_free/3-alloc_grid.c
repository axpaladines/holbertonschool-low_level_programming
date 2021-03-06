#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - pointer to a 2 dimensional array
* @width: width of the grid
* @height: height of the grid
*
* Return: array
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ret;

	ret = (int **)malloc(sizeof(int *) * height);
	if (ret == NULL || (width * height) <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ret[i] = (int *)malloc(sizeof(int) * width);
		if (ret[i] == NULL)
		{
			while (i >= 0)
			{
				free(ret[i]);
				i--;
			}
			free(ret);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ret[i][j] = 0;
	}
	return (ret);
}
