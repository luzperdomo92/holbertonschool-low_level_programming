#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - returns the result of an operation
 * @argc: int variable
 * @argv: char vatiable
 * Return: zero.
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", op(a, b));

	return (0);
}
