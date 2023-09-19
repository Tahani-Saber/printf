#include "main.h"
#include <limits.h>

/**
 * main - print formated string
 *
 * Return: always success (0), otherwise (1).
 */
int main(void)
{
	int printf_return, _printf_return;

	/* printf_return => the number of characters which printf printed */
	printf_return = printf("formated int: % d\t-\t", 567891);
	printf("printf return: %i\n", printf_return);


	/* _printf_return => the number of characters which _printf printed */
	_printf_return = _printf("formated int: % d\t-\t", 567891);
	printf("_printf return: %i\n", _printf_return);

	return (0);
}
