#include <stdio.h>
#include <stdlib.h>

/**
* main - return the multiplication
* @argc: number of input
* @argv: array
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1 || argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", i);
		return (0);
	}
}
