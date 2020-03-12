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
	char *op;
	char op_c;

	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_c = *argv[2];

	if (sizeof(argv[2]) != 2 && op_c != '+' && op_c != '-' &&
op_c != '*' && op_c != '/' && op_c != '%')
	{
		printf("Error\n");
		return (99);
	}

	if ((op_c == '/' || op_c == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
