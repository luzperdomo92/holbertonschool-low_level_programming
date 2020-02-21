#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: char variables.
 * Return: Always 0.
 */
char *cap_string(char *s)
{
int enable_upper_case = 1;
int fword;
for (fword = 0; s[fword] != '\0'; fword++)
{
if (enable_upper_case == 1 && s[fword] >= 'a' && s[fword] <= 'z')
{
s[fword] = s[fword] - 32;
enable_upper_case = 0;
}
else if (s[fword] == ' ' || s[fword] == '\t' || s[fword] == '\n'
|| s[fword] == ',' || s[fword] == ';' || s[fword] == '.'
|| s[fword] == '!' || s[fword] == '?' || s[fword] == '"'
|| s[fword] == '(' || s[fword] == ')' || s[fword] == '{'
|| s[fword] == '}')
{
enable_upper_case = 1;
}
else
{
enable_upper_case = 0;
}
}
return (s);
}
