#include "holberton.h"
/**
 * print_number - print numbers.
 *@n: times _ prints
 * Return: Always void.
 */
void print_number(int n)
{
int div;
int module;
int div_result;
int first_not_zero = 0;
if (n < 0)
{
_putchar ('-');
n = n * -1;
}
for (div = 1000000000; div >= 1; div = div / 10)
{
module = n % div;
div_result = n / div;
if ((first_not_zero == 0 && div_result != 0) || div == 1)
{
first_not_zero = 1;
}
if (first_not_zero == 1)
{
_putchar(div_result + '0');
}
n = module;
}
}

