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

/**
 * real_is_palindrome - find palindrome worlds
 *@s: char variable
 *@length: int variable
 *@pointer: in variable.
 * Return: funcion real is palindrome.
 */
int real_is_palindrome(char *s, int length, int pointer)
{
if (pointer > length - pointer)
{
return (1);
}
else if (s[pointer] != s[length - pointer])
{
return (0);
}
else
{
return (real_is_palindrome(s, length, pointer + 1));
}
}

/**
 * is_palindrome - funtion to find palindromes words
 *@s: char variable
 * Return: funcion prime number.
 */
int is_palindrome(char *s)
{
int pointer = 0;
int length = _strlen_recursion(s);
return (real_is_palindrome(s, length - 1, pointer));
}
