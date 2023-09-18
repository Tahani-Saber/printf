#include "main.h"

/**
 * print_bin - prints binary version of a number.
 *
 * @arg: number to be processed.
 *
 * Return: number of chars printed.
 */
int print_bin(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	return (convert(num, 2, 0));
}
