#include "holberton.h"
/**
 * real_sqrt_recursion - square root of the number.
 *@n: int variable
 *@sq: int variable
 * Return:  0.
 */
int real_sqrt_recursion(int n, int sq)
{
if (sq * sq >= n)
{
return (sq);
}
else
{
return (real_sqrt_recursion(n, sq + 1));
}
}
/**
 * _sqrt_recursion - prints the square root.
 *@n: int variable
 * Return:  value.
 */
int _sqrt_recursion(int n)
{
int sq = 0;
sq = real_sqrt_recursion(n, sq);
if (n == sq *sq)
{
return (sq);
}
else
{
return (-1);
}
}
