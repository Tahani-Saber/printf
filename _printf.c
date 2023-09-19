#include "main.h"

/**
 * _printf - print formated string.
 *
 * @format: formated string.
 *
 * Return: num of chars printed.
 */
int _printf(const char *format, ...)
{
	int n_printed_chars = 0, index = 0, func_printed_chars = 0;
	va_list args;
	int (*op_func)(va_list, flags_t *);
	flags_t flags = {0, 0, 0};
	int flags_found;

	va_start(args, format);
	if (format == NULL || (format[index] == '%' && format[index + 1] == '\0'))
		return (-1);

	while (format && format[index] != '\0')
	{
		if (format[index] != '%' && !flags_found)
		{
			n_printed_chars += _putchar(format[index]), index++;
			continue;
		}
		if (format[index + 1] == '\0')
		{
			va_end(args);
			return (-1);
		}
		index++;
		flags_found = get_flags(format, index, &flags);
		if (flags_found)
			continue;

		op_func = get_op_func(format[index]);
		if (op_func)
		{
			func_printed_chars = op_func(args, &flags);
			n_printed_chars += func_printed_chars, index++;
		}
		else if (op_func == NULL)
			n_printed_chars += _putchar('%');
		flags.hash = flags.plus = flags.space = 0;
	}
	va_end(args);

	return (n_printed_chars);
}
