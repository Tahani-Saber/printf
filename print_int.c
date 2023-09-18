#include "main.h"

/**
 * num_of_digits - calculate the number of a number's digits.
 *
 * @num: number to be processed.
 *
 * Return: num of the digits
 */
int num_of_digits(unsigned int num)
{
	int len = 0;

	while (num / 10 != 0)
	{
		num = num / 10;
		len++;
	}
	return (len + 1);
}

/**
 * print_number - print numbers that more than 1 digit.
 *
 * @n: number to be processed.
 *
 * Return: Nothing.
 */
int print_int(va_list arg)
{
	int len = 0, last, index, digit, negative = 0, base = 1;
	int tempi;
	int num = va_arg(arg, int);

	if (num == 0)
	{
		_putchar(0 + '0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		last = num % 10;
		last = last * -1;
		num = -1 * (num + 1);
		negative = 1;
	}

	last = negative == 1 ? last : num % 10;

	len = num_of_digits(num);
	if (len > 1)
	{
		for (index = 1; index < len; index++)
		{
			for (tempi = len - index; tempi != 0; tempi--)
			{
				base = base * 10;
			}

			digit = num / (base);
			digit = digit % 10;
			_putchar(digit + '0');
			base = 1;
		}
	}

	_putchar(last + '0');
	return (len + negative);
}
