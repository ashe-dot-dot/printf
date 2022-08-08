#include "main.h"
#include <stdarg.h>

/**
 * print_hex_lower - print a number in hexadecimal (lowercase)
 * @arg: the number
 * @f: set of flags
 * Return: lowercase hexadecimal
 */
int print_hex_lower(va_list arg, flags *f)
{
	unsigned int n;
	char *str;

	(void)f;

	n = va_arg(arg, unsigned int);
	str = convertor(n, 16, 0);
	return (_puts(str));
}

/**
 * print_hex_upper - print a number in hexadecimal (uppercase)
 * @arg: the number
 * @f: set of flags
 * Return: uppercase hexadecimal
 */
int print_hex_upper(va_list arg, flags *f)
{
	unsigned int n;
	char *str;

	(void)f;

	n = va_arg(arg, unsigned int);
	str = convertor(n, 16, 1);
	return (_puts(str));
}
