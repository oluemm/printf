#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

/**
 * struct print - print
 * @parameter: The operator
 * @f: The function associated
 */
typedef struct printType
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

int _printf(const char *format, ...);
int _string(va_list ap);
int _putchar(char c);
int _char(va_list ap);
int _percent(va_list ap __attribute__((unused)));
char *convert(unsigned int num, int base);
int _rot13(va_list ap);
int _reverse(va_list ap);
int _int(va_list ap);
int _unsigned(va_list ap);
int _octal(va_list ap);
int _hex_u(va_list ap);
int _binary(va_list ap);
int _hex_l(va_list ap);
int get_func(const char *format, print_type argument[], va_list ap);
int _address(va_list ap);

#endif /* _MAIN_H_ */
