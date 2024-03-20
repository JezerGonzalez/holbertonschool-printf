#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
/**
 *print_s - prints a string if a % is followd by an s
 *@args: function on the structure
 */
int print_s(va_list *args)
{
	int i;
	char *ptr = va_arg(*args, char *);
	if (ptr == NULL)
		return (write(1, "(null)", 6));

	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);

	return (i);
}
