#include "main.h"

/**
* _isdigit - check for a digit
* @c: the digit to be checked
*Return: 1 for a digit between 0 through 9 or for otherwise
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
