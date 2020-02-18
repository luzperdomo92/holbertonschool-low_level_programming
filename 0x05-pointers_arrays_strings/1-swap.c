#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of the variables.
 *@a:an array of int
 *@b:an array of int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
