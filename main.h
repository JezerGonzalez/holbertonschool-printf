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
void (*f)();
} comparison;
int _printf(const char *format, ...);
int _putchar(char c);
void print_s(va_list *args);
void print_c(va_list *args);
#endif /* MAIN_H */
