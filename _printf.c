#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_flag - return flags in argument
 * @s: fcharacter to be checked
 * @f: data structure item for flags
 * Return: always 1;
 */
int get_flag(char s, flags *f)
{
	int i;

	i = 0;
	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}

/**
 * get_print - returns the appropriate functions based on specifiers
 * @s: format specifier
 * Return: print function
 */
int (*get_print(char s))(va_list, flags *)
{
	int i;
	printStruct printSelector[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_decimal},
		{"i", print_decimal},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{"S", print_partial_string},
		{"p", print_pointer},
	};
	int flag_num = 11;

	for (i = 0; i < flag_num; i++)
	{
		if (*printSelector[i].type == s)
			return (printSelector[i].printer);
	}
	return (NULL);
}

/**
 * _printf - the replica of standard printf function
 * @format: the first argument
 * Return: the length of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count;
	int (*print_func)(va_list arg, flags *f);
	flags f = {0, 0, 0,};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	i = 0;
	count = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
				i++;
				continue;
			}
			while (get_flag(format[i], &f))
				i++;
			print_func = get_print(format[i]);
			if (print_func)
				count += print_func(args, &f);
			else
				count += _printf("%%%c", format[i]);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
