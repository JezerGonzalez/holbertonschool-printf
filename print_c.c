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
