#include "holberton.h"
/**
 * print_last_digit- print last number
 * @n: init type
 * Return: the value of last number.
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
if (m < 0)
{
m = m * -1;
}
_putchar(m + '0');
return (m);
}
