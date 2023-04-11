#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - concatenates arguments of a program
  * @ac: the number of arguments
  * @av: the array of arguments
  * Return: a pointer to a new string
  */

char *argstostr(int ac, char **av)
{
	int i;
	int offset;
	char *result;
	int total_length = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	total_length += strlen(av[i]) + 1;

	result = malloc(total_length * sizeof(char));

	if (result == NULL)
	return (NULL);

	offset = 0;
	for (i = 0; i < ac; i++)
	{
	strncpy(result + offset, av[i], strlen(av[i]));
	offset += strlen(av[i]);
	result[offset] = '\n';
	offset += 1;
	}

	result[offset] = '\0';
	return (result);
}
