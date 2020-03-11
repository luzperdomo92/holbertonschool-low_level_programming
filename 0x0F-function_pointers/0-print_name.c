#include<stdio.h>
#include "function_pointers.h"
/**
 * print_name - print the name.
 * @name: pointer char variable.
 *@f: pointer to funtion
 * Return: On success 1.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
