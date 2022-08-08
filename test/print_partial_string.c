#include "main.h"
#include <stdarg.h>

/**
 * print_partial_string - custome printf function with S format specifier
 * @arg: string
 * @f: set of flags
 * Return: lenght of arg
 */
int print_partial_string(va_list arg, flags *f)
{
	char *str;
	int i, count;
	char *hex;

	(void)f;
	str = va_arg(arg, char *);

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			hex = convertor(str[i], 16, 1);
			count += _puts("\\x");
			if (!(hex[1]))
			{
				_putchar('0');
				count++;
			}
			count += _puts(hex);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
