#include "holberton.h"
/**
 * _strspn - copies memory area.
 * @s: char variable
 * @accept: char variable
 * Return: the value of unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count_s;
int count_accept;
unsigned int max_bytes = 0;
for (count_accept = 0; accept[count_accept] != '\0'; count_accept++)
{
for (count_s = 0; s[count_s] != '\0'; count_s++)
{
if (s[count_s] == accept[count_accept])
{
if (count_s + 1 > max_bytes)
{
max_bytes = count_s + 1;
}
break;
}
}
}
return (max_bytes);
}
