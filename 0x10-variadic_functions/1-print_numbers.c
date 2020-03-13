#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  function to sum all the arguments.
 * @separator: variable type int
 * @n: unsigned int varibale.
 * return: value of print_numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	unsigned int value;
	va_list valist;

	va_start(valist, n);

	for (iter = 0; iter < n; iter++)
	{
		value = va_arg(valist, int);
		printf("%d", value);
		if (iter != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
