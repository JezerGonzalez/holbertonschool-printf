#include <stdarg.h>
typedef struct letter
{
char *cmp;
void (*f)();
} comparison;
int _printf(const char *format, ...);
int _putchar(char c);
void print_s(va_list *args);
void print_c(va_list *args);
