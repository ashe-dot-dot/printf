#include "main.h"

/**
 * print_char - printf replica with c format specifier
 * @arg: char to be printed
 * @f: set of flags
 * Return: always 1
 */
int print_char(va_list arg, flags *f)
{
	char c;

	(void)f;
	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
