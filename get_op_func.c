#include "main.h"

/**
 * get_op_func - selects the correct function to perform
 *	the operation asked by the user.
 *
 * @specifier: operator.
 *
 * Return: pointer to function.
 */
int (*get_op_func(char specifier))(va_list)
{
	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_100symbol},
		{"r", print_rev},
		{"R", print_rot13},
		{"d", print_int},
		{"i", print_int},
		{"u", print_uint},
		{"x", print_hex},
		{"X", print_HEX},
		{"o", print_octal},
		{"b", print_bin},
		{NULL, NULL}
	};
	int index;

	index = 0;
	while (ops[index].op != NULL)
	{
		if (specifier == *ops[index].op)
			return (ops[index].func);
		index++;
	}
	return (NULL);
}
