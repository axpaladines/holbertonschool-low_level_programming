#include "main.h"

/**
* root_square - square root function
* @n: number to find sqrt
* @i: possible sqrt
* Return: square root
*/

int root_square(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (root_square(n, i + 1));
	return (1);
}

/**
* _sqrt_recursion - return the natural square
* @n: square root
* Return: sqrt of n
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root_square(n, 1));
}
