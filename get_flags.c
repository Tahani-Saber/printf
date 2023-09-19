#include "main.h"

/**
 * get_flags - set flags
 *
 * @format: formated string.
 * @index: index of the flag in the formated string.
 * @flags: flags' struct
 *
 * Return: 1 => flag found, otherwise 0.
 */
int get_flags(const char *format, int index, flags_t *flags)
{
	int flag_found = 0;

	if (format[index] == '#')
	{
			flags->hash = 1;
			flag_found = 1;
	}
	else if (format[index] == ' ')
	{
			flags->space = 1;
			flag_found = 1;
	}
	else if (format[index] == '+')
	{
			flags->plus = 1;
			flag_found = 1;
	}

	return (flag_found);
}
