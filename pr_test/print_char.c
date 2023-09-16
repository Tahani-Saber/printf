#include "main.h"

/**
 * _print_char - function to print char type
 * @args: arguments ,passed to the func.
 *
 * Return: char printed
 */

int _print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
