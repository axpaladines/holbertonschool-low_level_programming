#include <stdio.h>

/**
* main - print the name
* @argc: number of input
* @argv: array
* Return: Always 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
