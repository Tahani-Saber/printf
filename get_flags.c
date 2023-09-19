#include "main.h"

/**
 * get_flags - set flags
 *
 * @flag: flag in the formated string.
 * @flags: flags' struct
 *
 * Return: 1 => flag found, otherwise 0.
 */
int get_flags(char flag, flags_t *flags)
{
	int flag_found = 0;

	if (flag == '#')
	{
		flags->hash = 1;
		flag_found = 1;
	}
	else if (flag == ' ')
	{
		flags->space = 1;
		flag_found = 1;
	}
	else if (flag == '+')
	{
		flags->plus = 1;
		flag_found = 1;
	}

	return (flag_found);
}
