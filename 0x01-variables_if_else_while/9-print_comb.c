#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 */
int main(void)
{
int a;

for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');

return (0);
}
