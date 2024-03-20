#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct types_arguments
{
        char t;
        int (*f)(va_list va);
} types;

int _putchar(char c);
int print_number(va_list va);
int _printf(const char *format, ...);

#endif
