#include <stdio.h>
#include <stdlib.h>
/**
 * main - int variable
 *@argc: int variable
 *@argv: char vatiable
 * Return: zero.
 */
int main(int argc, char **argv)
{
	int mult, mulp;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]);
	mulp = atoi(argv[2]);

	printf("%d\n", mult * mulp);
	return (0);
}
