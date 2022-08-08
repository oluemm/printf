#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

int _printf(const char *format, ...);
int _print_string(va_list ap);
int _putchar(char c);
int _print_char(va_list ap);
int _print_percent(va_list ap __attribute__((unused)));
char *convert(unsigned int num, int base);
int _print_rot13(va_list ap);
int _print_reverse(va_list ap);
int _print_int(va_list ap);
int _print_unsigned(va_list ap);
int _print_octal(va_list ap);

#endif /* _MAIN_H_ */