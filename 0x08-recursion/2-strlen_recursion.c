#include "main.h"
/**
  * _strlen_recursion - function that returns length of string by recursion
  * @s: the string to be measured
  * Return: leghth of the string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + (_strlen_recursion(s + 1)));
}
