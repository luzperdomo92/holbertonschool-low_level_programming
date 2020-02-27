#include "holberton.h"
/**
 * _sqrt_recursion - prints the factorial of the numbers.
 *@n: int variable
 * Return:  0.
 */
int _sqrt_recursion(int n)
{
int sq = 1;
while (sq * sq < n)
{
sq++;
}
if (n == sq *sq)
{
return (sq);
}
else
{
return (-1);
}
}
