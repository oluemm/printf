#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_char - writes the character c to stdout
 * @ap: The character to print
 * Return: 1
 */
int _print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
 * _print_percent - Prints a percent
 * @ap: Action pointer
 *
 * Return: 1
 */
int _print_percent(va_list ap __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * _print_reverse - Prints reversed string
 * @ap: Action pointer
 *
 * Return: Number of digits
 */
int _print_reverse(va_list ap)
{
	int len = 0;
	int i;
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	while (s[len])
		++len;
	i = len - 1;
	while (i >= 0)
		_putchar(s[i--]);
	return (len);
}

/**
 * _print_rot13 - Encode a string using rot13
 * @ap: Action pointer
 *
 * Return: Length of string
 */