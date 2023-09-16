#include "main.h"

/**
 * print_rev - print str in reverse.
 *
 * @arg: string to be printed.
 *
 * Return: number of characters had printed..
 */
int print_rev(va_list arg)
{
	int size;
	int index;
	char *ptr = va_arg(arg, char *);

	if (ptr == NULL)
		ptr = "(null)";

	size = _strlen(ptr);
	for (index = size - 1; index >= 0; index--)
	{
		_putchar(ptr[index]);
	}
	return (size);
}
