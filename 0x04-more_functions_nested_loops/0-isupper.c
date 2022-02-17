#include "main.h"

/**
* _isupper - check for uppercase character
* @c: the character to be checked
* Return: 1 for uppercase character or 0 to otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
