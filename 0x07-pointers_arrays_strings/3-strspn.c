#include "main.h"
/**
  * _strspn - gets legth of prefix substring
  * @s: string being searched
  * @accept: charactes being serached for
  * Return: 0 (Success)
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, n;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[k])
				break;
		}
		if (accept[n] == '\0')
			break;
	}
	return (k);
}
