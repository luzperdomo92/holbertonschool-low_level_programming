#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array- function
 *@size: int variable
 *@c: char variable
 *Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int length;

	if (size == 0)
	{
		return (NULL);
	}
	pointer = malloc(size * sizeof(c));
	if (pointer == 0)
	{
		return (NULL);
	}
	for (length = 0; length < size; length++)
	{
		*(pointer + length) = c;
	}
	return (pointer);
}
