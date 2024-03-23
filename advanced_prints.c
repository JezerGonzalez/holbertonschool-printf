#include "main.h"
#include <stdarg.h>
#include <stddef.h>
int print_reverse(va_list *args)
{
	int len, len2;
	char *ptr = va_arg(*args, char*);

	for (len = 0; ptr[len] != '\0'; len++)
		;
	for (len2 = (len - 1); len2 >= 0; --len2)
		_putchar(ptr[len2]);
	return(len);
}
int print_rot(va_list *args)
{
	int i = 0;
	char *ptr = va_arg(*args, char *);

	while (ptr[i] != '\0')
	{
		if ((ptr[i] >= 'A' && ptr[i] <= 'M') || (ptr[i] >= 'a' && ptr[i] <= 'm'))
			_putchar(ptr[i] + 13);
		else if ((ptr[i] >= 'N' && ptr[i] <= 'Z') || (ptr[i] >= 'n' && ptr[i] <= 'z'))
			_putchar(ptr[i] - 13);
		else
			_putchar(ptr[i]);
		i++;
	}
	return (i);
}
int print_binary(va_list *args)
{
	int binaryNum[32];
	int i = 0;
	int j;
	int num = va_arg(*args, int);
	if (num < 0)
		num = -num;

	if (num == 0)
		_putchar('0');

	for (; num > 0; i++)
	{
		binaryNum[i] = num  % 2;
		num /= 2;
	}

	for (j = (i - 1); j >= 0; --j)
		_putchar(binaryNum[j] + '0');
	
	return (i);
}
