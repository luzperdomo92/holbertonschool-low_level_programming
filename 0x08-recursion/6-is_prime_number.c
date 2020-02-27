#include "holberton.h"
/**
 * real_is_prime_number - find the prime number
 *@n: int variable
 *@div: int variable
 * Return: funcion prime number.
 */
int real_is_prime_number(int n, int div)
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
return (real_is_prime_number(n, div + 1));
}
}
/**
 * is_prime_number - find the prime number
 *@n: int variable
 * Return: funcion prime number.
 */
int is_prime_number(int n)
{
int prime;
int div;

if (n <= 0 || n == 1)
{
return (0);
}
if (n > 0)
{
div = 2;
}
prime = real_is_prime_number(n, div);
return (prime);
}
