#include "holberton.h"
/**
 * _memset - copies the character
 * @s: char variable
 * @b: char variable
 * @n: int variable
 * Return: the value of char s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int count;
for (count = 0; count < n; count++)
{
s[count] = b;
}
return (s);
}
