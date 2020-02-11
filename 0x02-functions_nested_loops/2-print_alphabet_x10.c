#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
char alp;
int num;
for (num = 1; num <= 10; num++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
