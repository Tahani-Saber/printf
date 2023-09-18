#include "main.h"

/**
 * print_hex - prints hex version of a number.
 *
 * @arg: number to be processed.
 *
 * Return: number of chars printed.
 */
int print_hex(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	return (convert(num, 16, 0));
}
