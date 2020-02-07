#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 16, starting from 0.
 * Return: 0
*/
int main(void)
{
int a;
char letter;

for (a = 0; a < 10; a++)
{
putchar(a + '0');
}

for (letter = 'a'; letter <= 'f' ; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
