#include "holberton.h"
#include <stdio.h>
/**
 * _puts -  prints a string.
 *@s:an array of int
 * Return: Always 0.
 */
void _puts(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
_putchar(s[a]);
}
_putchar ('\n');
}
