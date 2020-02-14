#include "holberton.h"
/**
* print_triangle- prints a triangle.
*@size: triangle size
* Return: Always void.
*/
void print_triangle(int size)
{
int times;
int spaces;
for (times = 1; times <= size; times++)
{
for (spaces = times; spaces < size; spaces++)
{
_putchar (' ');
}

for (spaces = (size - times); spaces < size; spaces++)
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

