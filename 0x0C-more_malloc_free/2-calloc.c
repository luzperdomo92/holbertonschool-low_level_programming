#include <stdio.h>
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array
 * @nmemb: size of the array
 * @size: the size of each element
 *
 * Return: a pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i_size;
	char *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(size * nmemb);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i_size = 0; i_size < size * nmemb; i_size++)
	{
		pointer[i_size] =  0;
	}
	return (pointer);
}
