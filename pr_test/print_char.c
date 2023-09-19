#include "main.h"

/**
 * print_char - function to print char type
 *
 * @args: arguments ,passed to the func.
 * @flag: flags to be considered in printing.
 *
 * Return: char printed
 */

int print_char(va_list args, flags_t *flag)
{
	char c = va_arg(args, int);
	(void) flag;

	return (_putchar(c));
}
