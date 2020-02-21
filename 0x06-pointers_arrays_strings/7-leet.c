#include "holberton.h"
/**
 * leet - encodes a string
 * @string: char variable.
 * Return: Always 0.
 */
char *leet(char *string)
{
char letters[] = {'a', 'e', 'o', 't', 'l'};
char numbers[] = {'4',  '3',  '0',  '7',  '1'};
int i_le;
int length;

for (length = 0; string[length] != '\0'; length++)
{
for (i_le = 0; i_le < 5; i_le++)
{
if (string[length] == letters[i_le] ||
string[length] + 32 == letters[i_le])
{
string[length] = numbers[i_le];
}
}
}
return (string);
}
