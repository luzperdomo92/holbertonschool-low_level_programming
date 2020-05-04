#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char variable
 * @accept: char variable
 * Return: the value of unsigned int.
 */
char *_strpbrk(char *s, char *accept)
{
int count_s;
int count_accept;
char *pointer = NULL;
int min_count;
for (count_accept = 0; accept[count_accept] != '\0'; count_accept++)
{
for (count_s = 0; s[count_s] != '\0'; count_s++)
{
if (s[count_s] == accept[count_accept])
{
if (!min_count || count_s < min_count)
{
min_count = count_s;
pointer = &s[count_s];
}
break;
}
}
}
return (pointer);
}
