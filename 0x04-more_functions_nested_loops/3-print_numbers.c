#include "holberton.h"
/**
 * print_numbers - prints numbers.
 *
 * Return:0.
 */
void print_numbers(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
_putchar(n);
}
_putchar('\n');
}
