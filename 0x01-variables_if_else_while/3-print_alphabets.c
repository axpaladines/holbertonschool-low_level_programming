#include <stdio.h>

/**
 * main - lowercase uppercase alphabet
 * Return: Always 0.
*/

int main(void)

{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);

	putchar ('\n');

	return (0);
}
