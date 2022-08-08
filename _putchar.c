#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a singles character
 * @c: the character to be printed
 * Return: always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
