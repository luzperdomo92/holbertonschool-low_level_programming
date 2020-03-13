#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  function that prints strings.
 * @separator: variable type int
 * @n: unsigned int varibale.
 * return: value of print_numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	char *pointer;
	va_list valist;

	va_start(valist, n);
	for (iter = 0; iter < n; iter++)
	{
		pointer = va_arg(valist, char*);
		if (pointer == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", pointer);
		}
		if (iter != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
