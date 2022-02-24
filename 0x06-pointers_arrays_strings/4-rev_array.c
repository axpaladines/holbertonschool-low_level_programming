#include "main.h"

/**
* rev_array - reverse an array
* @a: array
* @n: array length
* Return: int
*/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
