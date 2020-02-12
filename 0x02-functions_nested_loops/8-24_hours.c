#include "holberton.h"
/**
 * jack_bauer - print the time
 * @: init type
 * Return: the value of last number.
 */
void jack_bauer(void)
{
int hour;
int mins;

for (hour = 0; hour <= 23; hour++)
{
for (mins = 0; mins <= 59; mins++)
{
_putchar(hour / 10 + '0');
_putchar(hour % 10 + '0');
_putchar(':');
_putchar(mins / 10 + '0');
_putchar(mins % 10 + '0');
_putchar('\n');
}
}
}
