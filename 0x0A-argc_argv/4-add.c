#include <stdio.h>
#include <stdlib.h>
/**
 *has_non_digit_char - int variable
 *@int_char: char variable
 * Return:one or zero.
 */
int has_non_digit_char(char *int_char)
{
	while (*int_char != '\0')
	{
		if (*int_char < '0' || *int_char > '9')
		{
			return (1);
		}
		int_char++;
	}
	return (0);
}
/**
 * main - int variable
 *@argc: int variable
 *@argv: char vatiable
 * Return:one or  zero.
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int args_i;

	for (args_i = 1; args_i < argc; args_i++)
	{
		if (has_non_digit_char(argv[args_i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum +=  atoi(argv[args_i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
