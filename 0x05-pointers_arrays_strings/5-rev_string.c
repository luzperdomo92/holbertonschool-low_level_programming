#include "holberton.h"
/**
* rev_string -  prints a string in reverse
*@s:an array of int
* Return: Always 0.
*/
void rev_string(char *s)
{
int size = 0;
int i;
char swap[100];

for (size = 0; s[size] != '\0'; size++)
{
}
size--;
;
for (i = size; i >= 0 ; i--)
{
swap[size - i] = s[i];
}
for (i = 0; i < size ; i++)
{
s[i] = swap[i];
}

}

