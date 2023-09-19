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

/**
 * struct flags - flags to be considered when calling printf.
 *
 * @plus: '+' character
 * @space: ' ' character
 * @hash: '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

int _putchar(char);
int _strlen(char *);
int print_str(va_list, flags_t *);
int print_char(va_list, flags_t *);
int print_100symbol(va_list, flags_t *);
int _printf(const char *, ...);
int (*get_op_func(char))(va_list, flags_t *);
int print_rev(va_list, flags_t *);
int print_rot13(va_list, flags_t *);
int print_int(va_list, flags_t *);
int print_uint(va_list, flags_t *);
int print_hex(va_list, flags_t *);
int print_octal(va_list, flags_t *);
int print_HEX(va_list, flags_t *);
int convert(unsigned int, int, int);
int num_of_digits(unsigned int);
int print_bin(va_list, flags_t *);
int get_flags(const char *, int, flags_t *);

/**
 * struct op - Struct op
 *
 * @op: the specifier
 * @func: the function associated
 */
typedef struct op
{
	char *op;
	int (*func)(va_list, flags_t *);
} op_t;

#endif /* MAIN_H */
