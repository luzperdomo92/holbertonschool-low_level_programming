#include "holberton.h"
/**
 * _isupper -takes argument of an integer and returns a value of type int.
 * @c: An ascii char to compare
 * Return: 1 or 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
