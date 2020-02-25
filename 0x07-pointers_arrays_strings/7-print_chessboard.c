#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - print a chessboard
 * @a: char variable
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
int count_x;
int count_y;
for (count_x = 0; count_x < 8; count_x++)
{
for (count_y = 0; count_y < 8; count_y++)
{
putchar(a[count_x][count_y]);
}
putchar('\n');
}
}
