#include "main.h"

/**
* _pow_recursion - return value x raised to the power of y
* @x: value
* @y: raised to the power
* Return: raised
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
