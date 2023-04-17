#include <stdio.h>

/**
  * main - entry point
  * __FILE__ - macro expands to name of current source file as a string
  * Return: 0 if successful
  */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

