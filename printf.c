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
	comparison letra[] = {{"c", print_c}, {"s", print_s}, {NULL, NULL}};
	int i = 0, j, count = 0, total = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; letra[j].cmp != NULL; j++)
			{
				if (format[i + 1] == *letra[j].cmp)
				{
					i++, total += letra[j].f(args);
					i++, count += 2;
				}
			}
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++, count++;
			}
			else if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] != '\0')
				_putchar(format[i]);
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(args);
	return (total + (i - count));
}
