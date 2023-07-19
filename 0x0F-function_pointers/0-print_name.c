#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name using a given string
 * @name: this is a pointer to the string containing the name
 * @f: points to a function to print the name
 * Return: void
 **/


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		do {
			f(name);
		} while (0);
	}
}

