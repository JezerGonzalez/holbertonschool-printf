#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
/**
 *print_s - prints a string if a % is followd by an s
 *@args: function on the structure
 *Return: string
 */
int print_s(va_list *args)
{
	int len = 0;
	size_t x;
	char *ptr = va_arg(*args, char *);

	if (ptr == NULL)
		return (write(1, "(null)", 6));

	while (ptr[len] != '\0')
		len++;
	x = len;
	write(1, ptr, x);

	return (len);
}
