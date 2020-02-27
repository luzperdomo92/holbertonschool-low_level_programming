#include "holberton.h"
/**
 * real_is_prime_number - find the prime number
 *@n: int variable
 *@div: int variable
 *@add: in variable.
 * Return: funcion prime number.
 */
int real_is_prime_number(int n, int div, int add)
{
if (div == n)
{
return (1);
}
else if (n % div == 0)
{
return (0);
}
else
{
return (real_is_prime_number(n, div + add, add));
}
}

/**
 * is_prime_number - square root of the number.
 *@n: int variable
 * Return:  variable prime.
 */
int is_prime_number(int n)
{
int prime;
int div;
int add;

if (n == 0 || n == 1 || n == -1)
{
return (0);
}
if (n > 0)
{
div = 2;
add = 1;
}
else
{
div = -2;
add = -1;
}
prime = real_is_prime_number(n, div, add);
return (prime);
}
