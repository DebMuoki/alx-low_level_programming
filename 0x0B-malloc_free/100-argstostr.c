#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int arg_length;
	int i;
	int total_length = 0;
	int position;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);

	position = 0;
	for (i = 0; i < ac; i++)
	{
	arg_length = strlen(av[i]);
	strncpy(result + position, av[i], arg_length);
	position += arg_length;
	result[position++] = '\n';
	}
	result[total_length - 1] = '\0';

	return (result);
}

