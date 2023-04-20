#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: the list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *sep = "";
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
		{
		case 'c':
		printf("%s%c", sep, va_arg(args, int));
		break;
		case 'i':
		printf("%s%d", sep, va_arg(args, int));
		break;
		case 'f':
		printf("%s%f", sep, (float) va_arg(args, double));
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

