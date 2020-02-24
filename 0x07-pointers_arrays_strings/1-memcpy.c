#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: char variable
 * @src: char variable
 * @n: int variable
 * Return: the value of char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count;
for (count = 0; count < n; count++)
{
dest[count] = src[count];
}
return (dest);
}
