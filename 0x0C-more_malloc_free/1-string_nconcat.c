#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 * string_nconcat - function to allocate memory
 *@s1: char variable
 *@s2: char variable
 *@n: unsigned int variable
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  length_s1;
	unsigned int  length_s2;
	unsigned int  concat_s1;
	unsigned int  concat_s2;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (length_s1 = 0; s1[length_s1] != '\0'; length_s1++)
		;
	for (length_s2 = 0; s2[length_s2] != '\0'; length_s2++)
		;
	if (n > length_s2)
	{
		n = length_s2;
	}
	pointer = malloc((length_s1 + n) + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (concat_s1 = 0; concat_s1 < length_s1; concat_s1++)
	{
		pointer[concat_s1] = s1[concat_s1];
	}
	for (concat_s2 = 0; concat_s2 < n; concat_s2++)
	{
		pointer[concat_s1 + concat_s2] = s2[concat_s2];
	}
	pointer[(concat_s1 + concat_s2)] = '\0';
	return (pointer);
}
