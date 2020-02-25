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

for (count_s = 0; s[count_s] != '\0'; count_s++)
{
for (count_accept = 0; accept[count_accept] != '\0'; count_accept++)
{
if (s[count_s] == accept[count_accept])
{
max_bytes++;
break;
}
}
if (s[count_s] != accept[count_accept])
{
break;
}

}
return (max_bytes);
}

