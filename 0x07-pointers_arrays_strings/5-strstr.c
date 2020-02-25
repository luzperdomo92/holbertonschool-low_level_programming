#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: char variable
 * @needle: char variable
 * Return: the value of a pointer.
 */
char *_strstr(char *haystack, char *needle)
{
int count_haystack;
int count_needle;
char *pointer = NULL;
int matches = 0;
for (count_haystack = 0; haystack[count_haystack] != '\0'; count_haystack++)
{
matches = 1;
for (count_needle = 0; needle[count_needle] != '\0'; count_needle++)
{
if (needle[count_needle] != haystack[count_haystack + count_needle])
{
matches = 0;
break;
}
}
if (matches == 1)
{
pointer = &haystack[count_haystack];
break;
}
}
return (pointer);
}
