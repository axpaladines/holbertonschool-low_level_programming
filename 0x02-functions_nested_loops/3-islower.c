#include "main.h"

/**
* print_alphabet - prints the alphabet
* Return: 1 if character is lowercase
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
