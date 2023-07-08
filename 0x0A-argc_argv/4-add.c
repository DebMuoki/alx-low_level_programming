#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * isPositiveNumber - function Checks if a string is a positive number
 * @str: This is the string to check
 * Return: true if positive and false if not
 */

bool isPositiveNumber(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (false);
	str++;
	}
	return (true);
}

/**
 * main - this is the entry point
 * @argc: this is the number of arguments
 * @argv: arguments array
 * Return: the return value is 1
 **/

int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isPositiveNumber(argv[i]))
		result += atoi(argv[i]);
		else
	{
	printf("Error\n");
	return (1);
	}
	}

	printf("%d\n", result);
	return (0);
}
