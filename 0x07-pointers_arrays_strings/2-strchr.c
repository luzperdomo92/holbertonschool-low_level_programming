#include "holberton.h"
#include <stdio.h>
/**
* _strchr - locates a character in a string.
* @s: char variable
* @c: char variable
* Return: the value of pointer.
*/
char *_strchr(char *s, char c)
{
int count;
char *pointer = NULL;

if (s == NULL || c == NULL)
{
return (0);
}
for (count = 0; s[count] != '\0'; count++)
{
if (s[count] == c)
{
pointer = &s[count];
break;
}
}
return (pointer);
}

