#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  * @argc: number of arguments passed to the program
  * @argv: array of strings holding the arguments
  * Return: 0 if successful
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

