#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: range
 * @max: range
 *
 * Return: pointer of integers.
 */
int *array_range(int min, int max)
{
	int *pointer;
	int size;
	int size_i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (size_i = 0; size_i < size; size_i++)
	{
		pointer[size_i] = size_i + min;
	}
	return (pointer);
}
