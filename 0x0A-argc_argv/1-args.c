#include <stdio.h>
/**
  * main - main variable
  *@argc: int variable
  *@argv:char variable
  * Return: zero
  **/
int main(int argv, __attribute__((unused))char **argc)
{
	printf("%d\n", argv - 1);
	return (0);
}
