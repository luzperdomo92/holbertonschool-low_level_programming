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
	char *pointer;
	pointer = malloc(sizeof(char));
	printf("%s", str);
	return (pointer);
}
