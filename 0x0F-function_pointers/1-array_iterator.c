#include<stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - fill the value of an array
 * @array: array with values.
 *@size: size of the array
 * @action: pointer to function
 * Return: On success 1.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
