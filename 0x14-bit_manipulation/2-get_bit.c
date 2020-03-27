#include "holberton.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: integer to get its bit
 * @index: index to the bit
 * Return: 1 or 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	if (index != 0)
	{
		return (get_bit(n >> 1, --index));
	}

	return (n & 1);
}
