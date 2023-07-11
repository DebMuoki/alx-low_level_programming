#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function Concatenates all the arguments of program.
 * @ac: This is the number of arguments.
 * @av: This is an array of strings containing the arguments.
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int i, len, total_len = 0;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++;
	}

	string = malloc((total_len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			string[index] = av[i][len];
			len++;
			index++;
		}
		string[index] = '\n';
		index++;
	}
	string[index] = '\0';

	return (string);
}

