#include "main.h"
/**
  * _strstr - a function that locates a substring
  * @haystack: string being searched
  * @needle: substring being located for
  * Return: to needle if sucess or Null if otherwise
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *two = needle;
		char *one = haystack;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
