#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add- adicction oparation
 * @a: variable type int
 * @b: variable type int
 * Return: product of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- subtracction operation
 * @a: variable type int
 * @b: variable type int
 * Return: product of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- mulpiplication operation
 * @a: variable type int
 * @b: variable type int
 * Return: product of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- division operation
 * @a: variable type int
 * @b: variable type int
 * Return: product of the operation
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}

	printf("Error\n");
	exit(100);
}

/**
 * op_mod- module operation
 * @a: variable type int
 * @b: variable type int
 * Return: product of the operation
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}

	printf("Error\n");
	exit(100);
}
