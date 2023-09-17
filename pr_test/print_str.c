#include "main.h"

/**
 * print_str - function to print string
 *
 * @args: the arguments, passed to the func.
 *
 * Return: return the string number
 */

int print_str(va_list args)
{
	int s_count, index;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	s_count = _strlen(str);
	for (index = 0; index < s_count; index++)
		_putchar(str[index]);

	return (s_count);
}
