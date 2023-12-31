#include "main.h"

/**
 * print_ptr - function to print address
 *
 * @args: the arguments, passed to the func.
 * @flag: flags to be considered in printing
 *
 * Return: address
 */

int print_ptr(va_list args, flags_t *flag)
{
	void *ptr;
	char *str = "(nil)";
	unsigned long int cast;
	int index, pr_count = 0;
	(void) flag;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		index = 0;
		while (*str)
		{
			_putchar(*str);
			str++;
			index++;
		}
		return (index);
	}
	cast = (unsigned long int)ptr;

	pr_count += _putchar('0');
	pr_count += _putchar('x');
	pr_count += convert(cast, 16, 0);

	return (pr_count);
}
