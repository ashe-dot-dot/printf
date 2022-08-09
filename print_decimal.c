#include "main.h"
#include <stdarg.h>

/**
 * print_decimal - printf replica with i/d format specifiers
 * @arg: decimal number in base 10
 * @f: set of flags
 * Return: lenfth of the number
 */
int print_decimal(va_list arg, flags *f)
{
	int n, count;

	n = va_arg(arg, int);
	count = 0;

	(void)f;
	if (n <= 0)
		count++;
	count += count_digit(n);
	print_number(n);
	return (count);
}

/**
 * print_unsigned - printf replica with u format specifier
 * @arg: unsigned integer
 * @f: set of flags
 * Return: length of the number
 */
int print_unsigned(va_list arg, flags *f)
{
	unsigned int n, count;

	(void)f;

	n = va_arg(arg, unsigned long int);
	count = count_digit(n);
	print_number(n);
	return (count);
}

/**
 * count_digit - count the number of digits in a number
 * @n: integer number
 * Return: the number of digits of n
 */
int count_digit(int n)
{
	int i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/**
 * print_number - prints numbers recursively
 * @n: integer number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
