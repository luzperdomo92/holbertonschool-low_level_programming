#include "holberton.h"
/**
 * _puts_recursion - prints a strings calling the funtion.
 *@s: char variable
 * Return: no return.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar (*s);
s++;
_puts_recursion(s);
}
else
{
_putchar ('\n');
}
}
