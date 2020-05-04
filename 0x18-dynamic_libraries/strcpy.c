#include "holberton.h"
/**
* _strcpy -  duplicate  string.
*@dest: destination string pointer
*@src: source string pointer
* Return: string pointer with duplication.
*/
char *_strcpy(char *dest, char *src)
{
int a;
for (a = 0; src[a] != '\0'; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
