#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string that's followed by new line
 * @s: this is the string to be printed
 * Return: the return value is void
 **/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
