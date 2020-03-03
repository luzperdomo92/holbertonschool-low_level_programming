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
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	pointer = malloc(1 + sizeof(*str));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		pointer[len] = str[len];

	}
	pointer[len + 1] = 0;
	return (pointer);
}
