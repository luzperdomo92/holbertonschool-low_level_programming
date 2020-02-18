#include "holberton.h"
#include <stdio.h>
/**
 * print_rev -  prints a string in reverse
 *@s:an array of int
 * Return: Always 0.
 */
void print_rev(char *s)
{
int size;
int i;
for (size = 0; s[size] != '\0'; size++)
{

}
for (i = size - 1; i >= 0 ; i--)
{
_putchar (s[i]);
}
_putchar ('\n');
}
