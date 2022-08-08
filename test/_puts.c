#include "main.h"

/**
 * _puts - prints string
 * @str: the string to be printed
 * Return: the lenght of str
 */
int _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
