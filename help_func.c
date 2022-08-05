#include "main.h"
/**
 * _print_string - function that prints a string
 * @ap: the string
 *
 * Return: 1
 */

int _print_string(va_list ap)
{
	int i = 0;
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}
