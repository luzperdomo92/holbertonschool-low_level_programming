#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - function
 *@s1: char variable
 *@s2: char variable
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size;
	int length;
	int size_of;
	int length_of;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size = 0; s1[size] != '\0'; size++)
	{
		;
	}
	for (length = 0; s2[length] != '\0'; length++)
	{
		;
	}
	pointer = (char *)malloc(1 + sizeof(char) * (size + length));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (size_of = 0; s1[size_of] != '\0'; size_of++)
	{
		pointer[size_of] = s1[size_of];
	}
	for (length_of = 0; s2[length_of] != '\0'; length_of++)
	{
		pointer[size_of + length_of] = s2[length_of];
	}
	pointer[(size_of + length_of) + 1] = '\0';
	return (pointer);
}
