#include "holberton.h"
/**
 * _isalpha -takes an argument of an integer and returns an integer value.
 * @c: An ascii char to compare
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
