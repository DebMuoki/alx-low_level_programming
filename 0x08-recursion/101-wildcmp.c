#include "main.h"

/**
 * wildcmp - Compare two strings with wildcard support.
 *
 * @s1: The first input string.
 * @s2: The second input string with wildcard support.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		else if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		else
			return (0);
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (wildcmp(s1 + 1, s2))
			return (1);
		else
			return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

