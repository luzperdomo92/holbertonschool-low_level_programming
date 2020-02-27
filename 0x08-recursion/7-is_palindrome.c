#include "holberton.h"
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
int length = 0;
int pointer = 0;
while (s[length] != '\0')
{
length++;
}
return (real_is_palindrome(s, length - 1, pointer));
}
