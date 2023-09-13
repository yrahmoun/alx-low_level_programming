#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - get the function to execute
 * @s: operator to compare
 * Return: pointer to function
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
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (s && !strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
