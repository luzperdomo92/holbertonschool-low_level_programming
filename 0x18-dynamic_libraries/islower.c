#include "holberton.h"
/**
 * _islower - Retuns if the char sent is a lowercase.
 * @c: An ascii char to compare
 * Return: 1 or 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
