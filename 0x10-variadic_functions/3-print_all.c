#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *str1, *str2 = "";
	int i;

	va_start(list, format);
	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", str2, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", str2, va_arg(list, double));
					break;
				case 'c':
					printf("%s%c", str2, va_arg(list, int));
					break;
				case 's':
					str1 = va_arg(list, char *);
					if (!str1)
					{
						str1 = "(nil)";
					}
					printf("%s%s", str2, str1);
					break;
				default:
					i++;
					continue;
			}
			str2 = ", ";
			i++;
		}
	}
	putchar('\n');
	va_end(list);
}
