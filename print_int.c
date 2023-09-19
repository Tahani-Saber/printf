#include "main.h"

/**
 * print_int - print numbers that more than 1 digit.
 *
 * @arg: number to be processed.
 * @flag: flags to be considered in printing.
 *
 * Return: number of printed chars.
 */
int print_int(va_list arg, flags_t *flag)
{
	int len = 0, last, index, digit, negative = 0, base = 1;
	int tempi;
	int num = va_arg(arg, int);
	(void) flag;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num > 0 && flag->plus)
		_putchar('+');
	if (num < 0)
	{
		_putchar('-');
		last = num % 10;
		last = last * -1;
		num = -1 * (num + 1), negative = 1;
	}
	if (!negative && !flag->plus && flag->space)
		_putchar(' ');

	last = negative == 1 ? last : num % 10;
	len = num_of_digits(num);
	if (len > 1)
	{
		for (index = 1; index < len; index++)
		{
			for (tempi = len - index; tempi != 0; tempi--)
				base = base * 10;

			digit = num / (base);
			digit = digit % 10;
			_putchar(digit + '0');
			base = 1;
		}
	}
	_putchar(last + '0');
	return (len + (negative | flag->plus | flag->space));
}
