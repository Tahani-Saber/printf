#include "main.h"

/**
 * print_bin - prints binary version of a number.
 *
 * @arg: number to be processed.
 * @flag: flags to be considered in printing.
 *
 * Return: number of chars printed.
 */
int print_bin(va_list arg, flags_t *flag)
{
	unsigned int num = va_arg(arg, unsigned int);
	(void) flag;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	return (convert(num, 2, 0));
}
