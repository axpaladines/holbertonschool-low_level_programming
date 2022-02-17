#include "main.h"

/**
* print_diagonal - draws a diagonal line ini the terminal
* @n: the number of times to print diagonal lines
* Return: Always 0
*/

void print_diagonal(int n)
{
	int c, v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (v = 0; v < c; v++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
