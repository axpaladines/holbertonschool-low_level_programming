#include <stdio.h>

/**
* main - print the name
* @argc: number of input
* @argv: array
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
