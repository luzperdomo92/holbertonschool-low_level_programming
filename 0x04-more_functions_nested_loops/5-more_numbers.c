#include "holberton.h"
/**
 * more_numbers - added more numbers ten times.
 *
 * Return: Always void.
 */
void more_numbers(void)
{
int tent;
int num;
int second_digit;

for (tent = 1; tent <= 10; tent++)
{
for (num = 0; num <= 14; num++)
{
second_digit = num / 10;
if (second_digit != 0)
{
_putchar(second_digit + '0');
}
_putchar(num % 10 + '0');
}
_putchar('\n');
}
}
