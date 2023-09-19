#include "main.h"

/**
 * print_100symbol - function to print symbol
 *
 * @symbol: the fixed argument of the function
 * @flag: flags to be considered in printing.
 *
 * Return: nothing
 */
int print_100symbol(__attribute__((unused)) va_list symbol, flags_t *flag)
{
	(void)flag;

	return (_putchar('%'));
}
