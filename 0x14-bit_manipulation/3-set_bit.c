#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer to get its bit
 * @index: index to the bit
 * Return: 1 if ok.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int with_binary_index;

	if (index > 64)
	{
		return (-1);
	}

	with_binary_index = 1 << index;
	*n = *n | with_binary_index;
	return (1);
}
