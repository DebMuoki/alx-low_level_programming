#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - chooses correct function to perform operation
 * asked by user
 * @s: Operator passed as argument to program
 *
 * Return: pointer to function corresponds to operator that has been  given as
 * parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
		return (ops[i].f);
		i++;
	}
	return (NULL);
}

