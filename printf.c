#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 *_printf - prints the output acording to the format specifier
 *@format: specific character in a string
 *Return: 0
 */
int _printf(const char *format, ...)
{
	int len = 0, i = 0, j = 0, count = 0;
	va_list args;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return -1;
	}
	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			len += _putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				len += _putchar('%');
			}
			else
			{
				comparison letra[] = {
					{"c", print_c}, {"s", print_s},
					{"d", print_num}, {"i", print_num},
					{NULL, NULL}
				};
				while (letra[j].cmp != NULL)
				{
					if (format[i] == *(letra[j].cmp))
					{
						len += letra[j].f(args);
						count = 1;
						break;
					}
					j++;
				}
				if (!count)
				{
					len += _putchar('%');
					len += _putchar(format[i]);
				}
			}
		}
		i++;
	}
	va_end(args);
	return len;
}
