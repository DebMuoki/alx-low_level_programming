#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function prints numbers then followed by a new line.
 * @separator: This is the string to be printed between numbers.
 * @n: This is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int k;

	va_start(arg, n);

	for (k = 0; k < n; k++)
	{
	printf("%d", va_arg(arg, int));

	if (separator != NULL && k < n - 1)
	printf("%s", separator);
	}

	printf("\n");

	va_end(arg);
}

