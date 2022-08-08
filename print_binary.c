#include "main.h"
#include <stdarg.h>

/**
 * print_binary - prints a decimal number converted to binary
 * @arg: the number
 * @f: set of flags
 * Return: the number of digits of the binary number
 */
int print_binary(va_list arg, flags *f)
{
	int n;
	char *str;

	(void)f;

	n = va_arg(arg, int);
	str = convertor(n, 2, 0);
	return (_puts(str));
}
