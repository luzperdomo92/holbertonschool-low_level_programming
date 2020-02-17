#include <stdio.h>
/**
 * main - check the code for Holberton School students
 *
 * Return: Always 0.
 */
int main(void)
{
long n, i;
n = 612852475143;
for (i = 2; i < n; i++)
{
while (n % i == 0)
n = n / i;
}
printf("%li\n", n);
return (0);
}
