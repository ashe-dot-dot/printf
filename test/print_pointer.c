#include "main.h"
#include <stdarg.h>

/**
 * print_pointer - prints the contents of a pointer in hexadecimal form
 * @arg: the pointer
 * @f: set of flags
 * Return: length of characters printed
 */
int print_pointer(va_list arg, flags *f)
{
	unsigned long int n;
	char *str;

	(void)f;

	n = va_arg(arg, unsigned long int);
	str = convertor(n, 16, 0);
	_puts("0x");
	return (_puts(str) + 2);
}
