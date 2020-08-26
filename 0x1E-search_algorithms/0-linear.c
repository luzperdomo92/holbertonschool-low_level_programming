#include "search_algos.h"

/**
 * linear_search -searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in.
 * @size:  is the number of elements in array.
 * @value: is the value to search for.
 * Return: the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	if (array == NULL)
		return (-1);

	for (iter = 0; iter < size; iter++)
	{
		printf("Value checked array [%li] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
			return (iter);
	}
	return (-1);
}
