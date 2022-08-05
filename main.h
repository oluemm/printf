#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _print_string(va_list ap);
int _putchar(char c);
int _print_char(va_list ap);
int _print_percent(va_list ap __attribute__((unused)));

#endif /* _MAIN_H_ */