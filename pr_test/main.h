#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

#define MINUS_FLAG 1
#define PLUS_FLAG 2
#define ZERO_FLAG 4
#define HASH_FLAG 8
#define SPACE_FLAG 16


int _putchar(char);
int _strlen(char *);
int print_str(va_list);
int print_char(va_list);
int print_100symbol(va_list);
int _printf(const char *, ...);
int (*get_op_func(char))(va_list);
int print_rev(va_list);
int print_rot13(va_list);
int print_int(va_list);
int print_uint(va_list);
int print_hex(va_list);
int print_octal(va_list);
int print_HEX(va_list);
int convert(unsigned int, int, int);
int num_of_digits(unsigned int);
int print_bin(va_list);
int get_#+Sflag(const char *format, int *i);


/**
 * struct op - Struct op
 *
 * @op: the specifier
 * @func: the function associated
 */
typedef struct op
{
	char *op;
	int (*func)(va_list);
} op_t;

#endif /* MAIN_H */
