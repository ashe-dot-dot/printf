#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct flagStruct - data structure for flags
 * @plus: to put + sign before positive numbers
 * @space: invisible + sign before positive numbers
 * @hash: hash
 *
 * Description: data structure for flags
 */
typedef struct flagStruct
{
	int plus;
	int space;
	int hash;
} flags;

/**
 * struct printStruct - data structure for print functions
 * @type: format specifier
 * @printer: print function
 *
 * Description: data structure for print functions
 */
typedef struct printStruct
{
	char *type;
	int (*printer)(va_list arg, flags *f);
} printStruct;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_char(va_list arg, flags *f);
int print_str(va_list arg, flags *f);
int print_char(va_list arg, flags *f);
int print_decimal(va_list arg, flags *f);
int print_binary(va_list arg, flags *f);
char *convertor(unsigned long int n, int base, int upper);
void print_number(unsigned long int n);
int print_unsigned(va_list arg, flags *f);
int print_octal(va_list arg, flags *f);
int print_hex_lower(va_list arg, flags *f);
int print_hex_upper(va_list arg, flags *f);
int print_partial_string(va_list arg, flags *f);
int count_digit(int n);
int print_pointer(va_list arg, flags *f);
int (*get_print(char s))(va_list, flags *);
int print_rev(va_list arguments, char *buf, unsigned int ibuf)
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int print_func(const char *s, int index);


#endif
