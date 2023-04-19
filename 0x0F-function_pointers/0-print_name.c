#include "function_pointers.h"

/**
 * print_name - function that prints a given name using a provided function
 * @name: Pointer to the name to be printed
 * @f: Pointer to the function used to print the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
		if (!name || !f)
			return;

		f(name);
}

