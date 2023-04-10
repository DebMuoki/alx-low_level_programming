#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  * _atoi - converts string into integer
  * @argc: number of arguments in a programme
  * @argv: strings for argument
  * Return: 0 if succesful and 1 for error
  */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}


