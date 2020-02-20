#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * @s1: char variables.
 * @s2:  char variables.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int cmp;
for (cmp = 0; s1[cmp] != '\0'; cmp++)
if (s1[cmp] != s2[cmp])
{
return (s1[cmp] - s2[cmp]);
}
return (0);
}
