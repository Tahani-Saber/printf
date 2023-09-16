#include "main.h"

/**
 * _print_str - function to print string
 * @args: the arguments, passed to the func.
 *
 * Return: return the string number
 */

int _print_str(va_list args)
{
	int s_count = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";
	s_count = strln(str);
	while (*str)
		s_count += _putchar(*str++);
	return (s_count);
}
