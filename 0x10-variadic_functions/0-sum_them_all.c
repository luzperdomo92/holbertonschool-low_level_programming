#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -  function to sum all the arguments.
 * @n: variable type int
 * Return: sum_them_all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0;
	unsigned int iter;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);
	for (iter = 0; iter < n; iter++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
