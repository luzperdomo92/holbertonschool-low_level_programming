#include "holberton.h"
/**
 * more_numbers - added more numbers ten times.
 *
 * Return: Always void.
 */
void more_numbers(void)
{
int nums;
int num;
for (nums = 1; nums <= 10; nums++)
{
for (num = 0; num <= 14; num++)
{
_putchar(num);
}
_putchar('\n');
}
}
