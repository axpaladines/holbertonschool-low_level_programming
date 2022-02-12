#include <stdio.h>

/**
* main - single-digital numbers
* Return: Always 0
*/

int main(void)

{
	int n = 0;

	for (n = 0; n <= 10; n++)
	{
	putchar('0' + n);

	if (n != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
