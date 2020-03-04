#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - function
 *@width: char variable
 *@height: char variable
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **pointer;
	int height_i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	pointer =(int*) malloc(sizeof(int *) * height);
	for (height_i = 0; height_i < height; height_i++)
	{
		pointer[height_i] = malloc(sizeof(int) * width);
	       	}

	return (pointer);
}
