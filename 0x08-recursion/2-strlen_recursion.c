#include "holberton.h"
/**
 * _strlen_recursion - prints the length of the string.
 *@s: char variable
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (_strlen_recursion(s + 1) + 1);
}
return (0);
}
