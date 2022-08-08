#include "main.h"

/**
 * convertor - converts a base 10 number to another base
 * @n: the number to be converted
 * @base: base in which n is converted
 * @upper: uppercase or not for hexadecimal
 * Return: the converted number in base 'base' as a string
 */
char *convertor(unsigned long int n, int base, int upper)
{
	static char array[50];
	char *res;
	static char *digits;

	if (upper)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";

	res = &array[49];
	*res = '\0';
	do {
		*--res = digits[n % base];
		n /= base;
	} while (n != 0);
	return (res);
}
