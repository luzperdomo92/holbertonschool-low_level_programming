#include "holberton.h"
/**
 * print_square- prints a square, followed by a new line.
 *@size: size of he square
 * Return: Always void.
 */
void print_square(int size)
{
int lenght;
int width;
for (lenght = 1; lenght <= size; lenght++)
{
for (width = 1; width <= size; width++)
{
_putchar ('#');
}
_putchar ('\n');
}
if (size <= 0)
{
_putchar ('\n');
}
}

