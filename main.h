#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct letter - structure to find the format specifier
 * @cmp: comparing characters to the format specifier
 * @f: function
 */
typedef struct letter
{
char *cmp;
int (*f)();
} comparison;
int _printf(const char *format, ...);
int _putchar(char c);
int print_s(va_list *args);
int print_c(va_list *args);
int print_num(va_list *args);
int print_binary(va_list *args);
int print_rot(va_list *args);
#endif /* MAIN_H */
