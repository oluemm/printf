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
