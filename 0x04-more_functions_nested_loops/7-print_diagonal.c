#include "holberton.h"
/**
 * print_diagonal- prints diagonals lines.
 *@n: times _ prints
 * Return: Always void.
 */
void print_diagonal(int n)
{
int times;
int spaces;
for (times = 0; times < n; times++)
{
for (spaces = (n - times); spaces < n; spaces++)
{
_putchar (' ');
}

_putchar ('\\');
_putchar ('\n');
}
if (n <= 0)
{
_putchar ('\n');
}
}
