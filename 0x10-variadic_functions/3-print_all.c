#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  function that prints strings.
 * @format: variable type int
 * return: value of print_all
 */
void print_all(const char * const format, ...)
{
	int format_i = 0;
	va_list valist;
	char *my_p;
	int flag_flound;

	va_start(valist, format);
	while (format != NULL && format[format_i] != '\0')
	{
		flag_flound = 1;
		switch (format[format_i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			my_p = va_arg(valist, char*);
			if (my_p == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", my_p);
			break;
		default:
			flag_flound = 0;
			break;
		}
		format_i++;
		if (flag_flound == 1 && format[format_i] != '\0')
			printf(", ");
	}
	va_end(valist);
	printf("\n");
}
