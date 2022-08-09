#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - entry
 * Return: 1
 */
int main(void)
{
	int len, len2;

	len = _printf("NULL\n");
	len2 = printf("NULL\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	printf("\n");

	len = _printf("Character:[%c]\n", '%');
	len2 = printf("Character:[%c]\n", '%');
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	printf("\n");

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	printf("\n");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
