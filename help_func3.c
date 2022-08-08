#include "main.h"
/**
 * _binary - function that prints a binary number from int
 * @ap: the action pointer
 *
 * Return: the binary number
 */

int _binary(va_list ap)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, 2);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
		count += _putchar(s[i]);
	return (count);
}

/**
 * _hex_u - function that prints a hex number from int
 * @ap: the action pointer
 *
 * Return: the count
 */

int _hex_u(va_list ap)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, 16);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
		count += _putchar(s[i]);
	return (count);
}

/**
 * _hex_l - function that prints a hex number from int
 * @ap: the action pointer
 *
 * Return: the count
 */
int _hex_l(va_list ap)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, 16);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'F')
			count += _putchar(s[i] + ' ');
		else
			count += _putchar(s[i]);
	}
	return (count);
}
