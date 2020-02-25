#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: char variable
 * @size: int variable.
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int count_xy;
int count_i_xy;
int sum = 0;
int sum_i = 0;
for (count_xy = 0; count_xy < size * size; count_xy += size + 1)
{
sum = sum + a[count_xy];
}

for (count_i_xy = size - 1; count_i_xy < (size * size) - size;
count_i_xy += size - 1)
{
sum_i = sum_i + a[count_i_xy];
}
printf("%d, %d \n", sum, sum_i);
}

