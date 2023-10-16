#include "main.h"


/**
  * _strchr - function that locates a character in a string
  * @s: the string being searched
  * @c: the character being searched for
  * Return: Returns pointer to c or null if otherwise
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
