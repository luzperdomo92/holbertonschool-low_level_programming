#include "holberton.h"
/**
 * _pow_recursion - prints the factorial of the numbers.
 *@x: int variable
 *@y:int variable
 * Return:  0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
