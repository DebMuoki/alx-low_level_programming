#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers then followed by a new line
 * @separator: A string to be printed between numbers
 * @n: number of integers passed to function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
		va_list args;
		unsigned int k;

		va_start(args, n);

		for (k = 0; k < n; k++)
		{
			printf("%d", va_arg(args, int));

			if (separator && k != n - 1)
				printf("%s", separator);
		}

		va_end(args);

		printf("\n");
}

