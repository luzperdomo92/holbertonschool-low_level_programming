#include "holberton.h"
/**
 * clear_bit -  returns the number of bits you would need to flip
 * @n: integer to compare
 * @m: integer to compare
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;

	sum = ((n & 1) ^ (m & 1));
	if ((n == 1 || n == 0) && (m == 1 || m == 0))
	{
		return (sum);
	}

	return (sum + flip_bits(n >> 1, m >> 1));
}
