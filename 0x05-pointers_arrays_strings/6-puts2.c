#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - prints every other character a string.
 *@str:an array of int
 * Return: Always 0.
 */
void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a += 2)
{
_putchar(str[a]);
}
_putchar ('\n');
}
