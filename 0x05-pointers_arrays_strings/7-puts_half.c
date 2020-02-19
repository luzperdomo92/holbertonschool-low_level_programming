#include <stdio.h>
/**
* puts_half - prints half of a string
*@str: string to be printed
* Return: void.
*/
void puts_half(char *str)
{
int lenght;
int half_lenght;
int start;
for (lenght = 0; str[lenght] != '\0'; lenght++)
{
}

if (lenght % 2 == 0)
{
half_lenght = lenght / 2;
}
else
{
half_lenght = (lenght - 1) / 2;
}
start = lenght - half_lenght;

for (start = lenght - half_lenght; start < lenght; start++)
{
putchar(str[start]);
}
putchar('\n');
}

