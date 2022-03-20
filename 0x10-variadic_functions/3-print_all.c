#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str, *separator = "";

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
