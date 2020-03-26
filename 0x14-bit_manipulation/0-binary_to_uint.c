#include "holberton.h"
/**
 * get_str_length - get the lenght of the string
 * @b: is the pointer to the string
 * Return: the length of the string.
 */
unsigned int get_str_length(const char *b)
{
	unsigned int length;

	for (length = 0; b[length] != '\0'; length++)
	{
		;
	}
	return (length);
}

/**
 * binary_to_uint - convert binary number to int.
 * @b: is the pointer
 * Return: the int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int length;
	unsigned int b_i = 0;

	if (b == NULL)
	{
		return (0);
	}

	length = get_str_length(b) - 1;

	for (b_i = 0; b[b_i] != '\0'; b_i++)
	{
		if ((b[b_i] != '0') && (b[b_i] != '1'))
		{
			return (0);
		}

		number = number + ((b[b_i] - '0') * 1 << length);
		length--;
	}
	return (number);
}
