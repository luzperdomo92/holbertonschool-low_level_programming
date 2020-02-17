#include "holberton.h"
#include <stdbool.h>
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
bool first_not_zero = false;
if (n == 0)
{
_putchar (n + '0');
return;
}
if (n < 0)
{
_putchar ('-');
n = n * -1;
}
for (div = 1000000000; div >= 1; div = div / 10)
{
module = n % div;
div_result = n / div;
if (first_not_zero == false && div_result != 0)
{
first_not_zero = true;
}
if (first_not_zero == true)
{
_putchar(div_result + '0');
}
n = module;
}
}

