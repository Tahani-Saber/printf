#include "main.h"

/**
 * get_flag - handle flags
 * @format: first argument as formatted argument in string
 * @i: second argument take a parameter
 *
 * Return: return flag
 */

int get_flag(const char *format, int *i)
{
	int index1, index2, flag = 0;
	const char f_char[] = {'-', '+', '0', '#', ' ', '\0'};
	const char f_arr[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (index1 = *i + 1; format[index1] != '\0'; index1++)
	{
		for (index2 = 0; f_char[index2] != '\0'; index2++)
		{
			if (format[index1] == f_char[index2])
				flag |= f_arr[index2];
				break;
		}
		if (f_char[index2] == 0)
			break;
	}
	*i = index1 - 1;
	return (flag);
}
