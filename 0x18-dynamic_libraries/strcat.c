#include "holberton.h"
/**
 * _strcat - pounter, copy of the string
 * @dest: char variables.
 * @src:  char variables.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int l;
int c;
for (l = 0; dest[l] != '\0'; l++)
{
}
for (c = 0; src[c] != '\0'; c++)
{
dest[l + c] = src[c];
}
dest[l + c] = '\0';
return (dest);
}
