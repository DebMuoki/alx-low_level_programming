#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by new line
 * @separator: string to print between strings
 * @n: number of strings passed to function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
		va_list args;
		unsigned int k;
		char *str;

		va_start(args, n);

		for (k = 0; k < n; k++) 
		{
			str = va_arg(args, char *);

			if (str)
				printf("%s", str);
			else
				printf("(nil)");

			if (separator && k != n - 1)
				printf("%s", separator);
		}

		va_end(args);

		printf("\n");
}

