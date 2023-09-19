#include "main.h"
#include <limits.h>

/**
 * main - print formated string
 *
 * Return: always success (0), otherwise (1).
 */
int main(void)
{
	int printf_return;
	int _printf_return;


	/* printf_return => the number of characters which printf printed */
	printf_return = printf("formated STR: %p\t-\t", (void *)0x7ffe637541f0);
	printf("printf return: %i\n", printf_return);


	/* _printf_return => the number of characters which _printf printed */
	_printf_return = _printf("formated STR: %p\t-\t", (void *)0x7ffe637541f0);
	printf("_printf return: %i\n", _printf_return);

	return (0);
}
