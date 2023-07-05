#include "main.h"

/**
 * _strlen_recursion - function that counts the length of a string
 * @s: the string
 * Return: return value is the length of the string
 **/

int _strlen_recursion(char *s)
g

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
