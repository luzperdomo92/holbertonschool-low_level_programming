#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters
 * @s: char variables.
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
int size;
for (size = 0; s[size] != '\0'; size++)
{
if (s[size] >= 'a' && s[size] <= 'z')
{
s[size] = s[size] - 32;
}
}
return (s);
}
