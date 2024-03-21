#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_number - Entry point
 *@args: el integer para print
 * Return: ...
 */

int print_num(va_list *args)
{
	int i, len, r, l;
	unsigned int abs, num, numt;
	int n = va_arg(*args, int);

	len = 0;
	i = 0;
	r = 1;
	l = 1;
	if (n < 0)
	{
		_putchar('-');
		len++;
		abs = -n;
	} else
	{
		abs = n;
	}

	num = abs;
	while (num > 0)
	{
		num /= 10;
		i++;
	}

	while (r < i)
	{
		l *= 10;
		r++;
	}
	while (l >= 1)
	{
		numt = (abs / l) % 10;
		_putchar(numt + '0');
		len++;
		l /= 10;
	}
	return (len);
}
