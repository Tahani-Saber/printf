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
	int tempi, counter = 0;
	int num = va_arg(arg, int);
	(void) flag;

	if (num >= 0 && !flag->plus && flag->space)
		_putchar(' '), len++;
	if (num >= 0 && flag->plus)
		_putchar('+'), len++;
	if (num == 0)
	{
		_putchar('0');
		return (len + 1);
	}

	if (num < 0)
	{
		_putchar('-'), len++;
		last = num % 10;
		last = last * -1;
		num = -1 * (num + 1), negative = 1;
	}

	last = negative == 1 ? last : num % 10;
	counter += num_of_digits(num);
	if (counter > 1)
	{
		for (index = 1; index < counter; index++)
		{
			for (tempi = counter - index; tempi != 0; tempi--)
				base = base * 10;

			digit = num / (base);
			digit = digit % 10;
			_putchar(digit + '0');
			base = 1;
		}
	}
	_putchar(last + '0');
	return (len + counter);
}
