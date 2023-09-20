#include "main.h"

/**
 * print_octal - prints octal version of a number.
 *
 * @arg: number to be processed.
 * @flag: flags to be considered in printing.
 *
 * Return: number of chars printed.
 */
int print_octal(va_list arg, flags_t *flag)
{
	unsigned int num = va_arg(arg, unsigned int);
	int len = 0;

	if (num == 0)
	{
		_putchar('0');
		len++;
		return (len);
	}

	if (flag->hash)
	{
		_putchar('0');
		len = 1;
	}
	len += convert(num, 8, 0);
	return (len);
}
