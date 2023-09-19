#include "main.h"

/**
 * print_rev - print str in reverse.
 *
 * @arg: string to be printed.
 * @flag: flags to be considered in printing.
 *
 * Return: number of characters had printed..
 */
int print_rev(va_list arg, flags_t *flag)
{
	int size;
	int index;
	char *ptr = va_arg(arg, char *);
	(void) flag;

	if (ptr == NULL)
		ptr = "(null)";

	size = _strlen(ptr);
	for (index = size - 1; index >= 0; index--)
	{
		_putchar(ptr[index]);
	}
	return (size);
}
