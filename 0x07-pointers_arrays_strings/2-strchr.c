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
char *pointer = 0;

for (count = 0; s[count] != '\0'; count++)
{
if (s[count] == c)
{
pointer = &s[count];
break;
}
}

if (s[count] == c)
{
  pointer = &s[count];
}

return (pointer);
}

