#include "variadic_functions.h"

/**
* print_numbers - prints numbers
* @separator: string between numbers
* @n: number of integers
*
* Return: Always 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int num;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
