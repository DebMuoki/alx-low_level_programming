#include "main.h"

/**
 * wildcmp - compares two strings, allowing for wildcard character *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 == '\0' || *s2 == '*')
	{
            return (1);
        }
        else
        {
            return (0);
        }
    }
    else if (*s2 == '*')
    {
        if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
    else if (*s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }
    else
    {
        return (0);
    }
}

