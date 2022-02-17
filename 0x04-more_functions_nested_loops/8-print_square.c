#include "main.h"

/**
 * print_square - draws a square on the terminal.
 * @size: the size of the square
 *
 * Return: If integer is 0 or less
 */
void print_square(int size)
{
	int c, v;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (v = 0; v < size; v++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
