#include <stdio.h>
/**
 * main - main block
 * Description: prints the numbers from 00 to 99
 * Return: 0
*/
int main(void)
{
int a;

for (a = 0; a <= 99; a++)
{
putchar('0');
putchar(a + '0');
if (a != 99)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}

