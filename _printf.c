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
	int (*op_func)(va_list);

	va_start(args, format);
	while (format && format[index] != '\0')
	{
		if (format[index] != '%')
		{
			n_printed_chars += _putchar(format[index]);
			index++;
			continue;
		}
		if (format[index + 1] == '\0')
			break;

		index++;
		if (get_op_func(format[index]))
		{
			op_func = get_op_func(format[index]);
			func_printed_chars = op_func(args);
			n_printed_chars += func_printed_chars;
			index++;
		}
	}
	va_end(args);

	return (n_printed_chars);
}
