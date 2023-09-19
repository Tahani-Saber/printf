#include "main.h"

/**
 * convert - convert to any specified base.
 *
 * @num: num to be converted.
 * @base: the base number convert to.
 * @upperCase: print alphabets in uppercase or not
 *
 * Return: num of printed chars.
 */
int convert(unsigned long int num, int base, int upperCase)
{
	static const char upper_hex[] = "0123456789ABCDEF";
	static const char lower_hex[] = "0123456789abcdef";
	static const char *hex = lower_hex;
	int len = 1;

	if (upperCase)
		hex = upper_hex;

	if (num == 0)
	{
		return (0);
	}

	len += convert(num / base, base, upperCase);
	_putchar(hex[num % base]);
	return (len);
}
