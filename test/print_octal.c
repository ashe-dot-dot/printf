#include "main.h"
#include <stdarg.h>

/**
 * print_octal - prints octal
 * @arg: the number
 * @f: set of flags
 * Return: num in octal
 */
int print_octal(va_list arg, flags *f)
{
	unsigned int n;
	char *str;

	(void)f;

	n = va_arg(arg, unsigned int);
	str = convertor(n, 8, 0);
	return (_puts(str));
}
