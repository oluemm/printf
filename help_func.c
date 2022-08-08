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

/**
 * _print_int - Prints an integer
 * @ap: Action pointer
 *
 * Return: Number of digits
 */
int _print_int(va_list ap)
{
	int i;
	int count = 0;
	int n = va_arg(ap, int);

	if (n < 0)
	{
		count += _putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				count += _putchar(-(n / i % 10) + '0');
			else
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}

/**
 * _print_unsigned - Prints an unsigned integer
 * @ap: Action pointer
 *
 * Return: Number of digits
 */

int _print_unsigned(va_list ap)
{
	int i;
	int count = 0;
	int mint = va_arg(ap, int);
	unsigned int n;

	n = mint;
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 != 0)
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
