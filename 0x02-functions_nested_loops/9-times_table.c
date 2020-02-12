#include "holberton.h"
/**
 * times_table - prints times table
 * @: init type
 * Return: the value of last number.
 */
void times_table(void)
{
int multiplicand;
int multiplier;
int result;
int tens;
for (multiplicand = 0; multiplicand <= 9; multiplicand++)
{
for (multiplier = 0; multiplier <= 9; multiplier++)
{
result = multiplicand * multiplier;
tens = result / 10;
if (result > 0)
{
if (tens > 0)
{
_putchar(tens + '0');
}
else
{
_putchar(' ');
}
}
_putchar(result % 10 + '0');
if (multiplier != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
