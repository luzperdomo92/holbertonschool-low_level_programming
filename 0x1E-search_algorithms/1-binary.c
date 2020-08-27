#include "search_algos.h"

/**
 * binary_search -searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in.
 * @size:  is the number of elements in array.
 * @value: is the value to search for.
 * Return: the index where value is located.
 */
 int binary_search(int *array, size_t size, int value)
{
	size_t max = size - 1;
	size_t min = 0;
	size_t middle, iter;

	if (array == NULL)
		return (-1);

	while (max >= min)
	{
		middle = (max + min) / 2;
		printf("Searching in array: ");
		for (iter = min; iter <= max; iter++)
		{
			if (iter != max)
				printf("%d, ", array[iter]);
			else
				printf("%d\n", array[max]);

		}
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			max = middle - 1;
		else
			min = middle + 1;
	}
	return (-1);
}
