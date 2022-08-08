#include "main.h"

/**
 * _printf - function that replicates what printf does
 * @format: a character string
 *
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;

	print_type fargs[] = {
		{"c", _char},
		{"s", _string},
		{"%", _percent},
		{"d", _int},
		{"i", _int},
		{"v", _reverse},
		{"R", _rot13},
		{"b", _binary},
		{"u", _unsigned},
		{"o", _octal},
		{"x", _hex_l},
		{"X", _hex_u},
		{NULL, NULL}};
	va_list ap;

	if (!format)
		return (-1);

	va_start(ap, format);
	count = get_func(format, fargs, ap);
	va_end(ap);
	return (count);
}
