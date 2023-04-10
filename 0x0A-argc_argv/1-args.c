#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - entry point
  * @argc: number of arguments passed to program
  * @argv: array of strings holding arguments
  * Return: 0 is successful
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("argc = %d\n", argc - 1);
	return (0);
}
