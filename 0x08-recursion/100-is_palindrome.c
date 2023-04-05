#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 *
 * Return: 1 if true, 0 ifnnot
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns string length
 * @s: string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	return (*s == '\0' ? 0 : 1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters recursively for palindrome
 * @s: string
 * @i: iterator
 * @len: string lengt
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	return (i >= len ?
		1 :
		(*(s + i) == *(s + len - 1) &&
		 check_pal(s, i + 1, len - 1)));
}

