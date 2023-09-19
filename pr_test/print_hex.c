#include "main.h"

/**
 * print_hex - prints hex version of a number in lowercase.
 *
 * @arg: number to be processed.
 * @flag: flags to be considered in printing.
 *
 * Return: number of chars printed.
 */
int print_hex(va_list arg, flags_t *flag)
{
	unsigned int num = va_arg(arg, unsigned int);
	int len = 0;

	if (flag->hash)
	{
		_putchar('0');
		_putchar('x');
		len = 2;
	}
	if (num == 0)
	{
		_putchar('0');
		len++;
		return (len);
	}
	len += convert(num, 16, 0);
	return (len);
}
