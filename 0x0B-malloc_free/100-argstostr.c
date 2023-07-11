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
    if (ac == 0 || av == NULL)
        return NULL;

    int total_length = 0;
    for (int i = 0; i < ac; i++)
        total_length += strlen(av[i]) + 1;

    char *result = malloc((total_length + 1) * sizeof(char));
    if (result == NULL)
        return NULL;

    int position = 0;
    for (int i = 0; i < ac; i++)
    {
        int arg_length = strlen(av[i]);
        strncpy(result + position, av[i], arg_length);
        position += arg_length;
        result[position++] = '\n';
    }
    result[total_length] = '\0';

    return result;
}

