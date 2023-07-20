#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything
 * @format: The list of types of arguments passed to the function
 * Return: return value is void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *str;
	char *sep = "";
	char c;
	int i = 0;

	va_start(args, format);

	while (format && (c = format[i]))
	{
		switch (c)
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}

