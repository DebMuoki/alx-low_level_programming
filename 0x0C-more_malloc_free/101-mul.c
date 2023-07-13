#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int is_valid_number(char *num);

/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: array of strings containing arguments.
 * Return: Return value is  0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	int int1, int2, result;
	char *num1, *num2;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
	printf("Error\n");
	return (98);
	}

	int1 = atoi(num1);
	int2 = atoi(num2);

	result = int1 * int2;

	printf("%d\n", result);

	return (0);
}


/**
* is_valid_number -  function checks string is a valid number.
* @num: This is the string to check.
* Return: 1 if string is a valid number, else 0
*/

int is_valid_number(char *num)
{
	while (*num)
	{
	if (!isdigit(*num))
	return (0);
	num++;
	}
	return (1);
}


