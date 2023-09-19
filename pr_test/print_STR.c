#include "main.h"

/**
 * print_STR - function to print string
 *
 * @args: the arguments, passed to the func.
 * @flag: flags to be considered in printing.
 *
 * Return: return the string number
 */

int print_STR(va_list args, flags_t *flag)
{
	int s_count, index;
	char *str = va_arg(args, char *);
	(void) flag;

	if (str == NULL)
		str = "(null)";

	s_count = _strlen(str);
	for (index = 0; str[index]; index++)
	{
		if (str[index] >= 32 && str[index] < 127)
		{
			_putchar(str[index]);
			continue;
		}
		/* All numbers below 16 are one digit hexadecimal */
		/* So we want to print always two digit hexadecimal */
		_putchar('\\');
		_putchar('x');
		if (str[index] < 16)
			_putchar('0');

		s_count += 2 + convert((unsigned int)str[index], 16, 1);
	}
	return (s_count);
}
