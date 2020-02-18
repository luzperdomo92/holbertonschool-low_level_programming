#include "holberton.h"
#include <stdio.h>
/**
* print_array - print array
* @a: an array of ints
* @n: size of the array
* Return: void.
*/
void print_array(int *a, int n)
{
int v;
for (v = 0; v < n; v++)
{
printf("%d", a[v]);
if (v != n - 1)
{
printf(", ");
}
}
printf("\n");
}

