#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 *print_c - prints a character if a % is followed by c
 *@args: function on the structure
 */
void print_c(va_list *args)
{
	char letra = va_arg(*args, int);
	_putchar(letra);
}
/**
 *print_s - prints a string if a % is followd by an s
 *@args: function on the structure
 */
void print_s(va_list *args)
{
	int i;
	char *ptr = va_arg(*args, char *);

	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);
}
/**
 *_printf - prints the output acording to the format specifier
 *@format: specific character in a string
 *Return: 0
 */
int _printf(const char *format, ...)
{
	comparison letra[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL},
	};
	int i;
	int j;

	va_list args;

	va_start(args, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar('%');
			for (j = 0; letra[j].cmp != NULL; j++)
			{
				if (format[i + 1] == *letra[j].cmp)
				{
					letra[j].f(args);
					i++;
				}
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(args);
	return (0);
}
