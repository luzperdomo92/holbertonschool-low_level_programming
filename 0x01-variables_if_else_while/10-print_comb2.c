#include <stdio.h>
/**
 * main - main block
 * Description: prints the numbers from 00 to 99
 * Return: 0
*/
int main(void)
{
int units;
int tens;

for (tens = 0; tens <= 9; tens++)
{
for (units = 0; units <= 9; units++)
{
putchar(tens + '0');
putchar(units + '0');
if (!(tens == 9 && units == 9))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}

