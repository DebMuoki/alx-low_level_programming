#include <stdio.h>
#include "main.h"

/**
 * main - this is the entry point
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 * Return: the return value is 0
 **/

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}

