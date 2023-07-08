#include "main.h"
/**
  * _strpbrk - function that searches string for any set of bytes
  * @s: string being searched
  * @accept: input
  * Return: pointer to byte in s or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}

