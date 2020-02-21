#include "holberton.h"
/**
 * _strncat - concatenates two strings with n value.
 * @dest: char variables.
 * @src:  char variables.
 * @n: int variable.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int length;
int concat;
for (length = 0; dest[length] != '\0'; length++)
{
}
for (concat = 0; concat < n; concat++)
{
dest[length + concat] = src[concat];
if (src[concat] == '\0')
{
break;
}
}
return (dest);
}
