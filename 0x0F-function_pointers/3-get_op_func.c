#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func- Returns a function related to the char sent
 * @s: char of the function
 * Return: Returns a function related to the char sent
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

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
