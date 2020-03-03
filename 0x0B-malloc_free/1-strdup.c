#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - function
 *@str: char variable
 * Return: pointer
 */
char *_strdup(char *str)
{
	int len;
	int size;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	pointer = (char *)malloc(sizeof(char) * (size + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		pointer[len] = str[len];

	}
	return (pointer);
}
