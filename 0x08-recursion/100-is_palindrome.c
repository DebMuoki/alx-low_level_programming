#include "main.h"
#include <string.h>

int the_palindrome_helper(char *s, int index, int end);

/**
 * is_palindrome - function that checks is a string is a palindrome.
 * @s: Thestring.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 **/

int is_palindrome(char *s)

{
	int longi = strlen(s);

	if (!s || *s == '\0')
		return (1);

	return (the_palindrome_helper(s, 0, longi - 1));
}

/**
 * the_palindrome_helper - Function checks for palindrome recursively
 * @s: The string.
 * @index: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int the_palindrome_helper(char *s, int index, int end)
{
	if (index >= end)
		return (1);
	else if (s[index] != s[end])
		return (0);
	else
		return (the_palindrome_helper(s, index + 1, end - 1));
}

