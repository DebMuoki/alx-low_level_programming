#include "main.h"
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - Check if a string is a palindrome.
 *
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 *         An empty string is considered a palindrome.
 */
int is_palindrome(char *s)

{
	int length = strlen(s);

	if (!s || *s == '\0')
		return (1);

	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * is_palindrome_helper - Recursive helper function to check for palindrome.
 *
 * @s: The input string.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_helper(s, start + 1, end - 1));
}

