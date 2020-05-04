#include "holberton.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: int type
 * Return: return absolute value of integer
 */

int _abs(int n)
{
if (n < 0)
return (n * -1);
else
return (n);
}
