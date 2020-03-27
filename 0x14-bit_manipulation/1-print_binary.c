#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer to print
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	if (n == 1 || n == 0)
	{
		putchar('0' + n);
		return;
	}

	print_binary(n >> 1);

	putchar('0' + (n & 1));
}
