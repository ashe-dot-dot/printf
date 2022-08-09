#include "main.h"

/**
 * print_str - printf replica with s format specifier
 * @arg: the string to be prnted
 * @f: set of flags
 * Return: the lenght of the string
 */
int print_str(va_list arg, flags *f)
{
	char *str;

	(void)f;
	str = va_arg(arg, char *);
	if (!str)
		str = "(null)";
	return (_puts(str));
}
