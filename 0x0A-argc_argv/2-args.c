#include <stdio.h>
/**
 * main - int variable
 *@argc: int variable
 *@argv: char vatiable
 * Return: zero.
 */
int main(int argc, char **argv)
{
	int leingth;

	for (leingth = 0; leingth < argc; leingth++)
	{
		printf("%s\n", argv[leingth]);
	}
	return (0);
}
