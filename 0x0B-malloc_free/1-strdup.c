#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - function to copy
 *@str: char variable
 * Return: pointer
 */
char *_strdup(char *str)
{
	int len;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(char));
	for (len = 0; str[len]; len++)
	{
		pointer[len] = str[len];
	}
	return (pointer);
}
