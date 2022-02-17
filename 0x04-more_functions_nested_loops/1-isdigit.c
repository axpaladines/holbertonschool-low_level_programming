#include "main.h"

/**
* _isdigit - function that checks for a digit
* @c: is a digit
* Return: 1 for a digit between 0 through 9 or for otherwise
*/

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
