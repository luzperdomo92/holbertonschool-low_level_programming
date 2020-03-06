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
	return (malloc(size * nmemb));
}
