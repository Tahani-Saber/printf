#include "main.h"

/**
 * main - print formated string
 *
 * Return: always success (0), otherwise (1).
 */
int main(void)
{

/*******************************************/

	printf("_printf return: %i\n", printf("helloa%z %"));

	printf("_printf return: %i\n", _printf("helloa%z %"));

	printf("printf return: %i\n", printf("world%z %s", "ddd"));

	printf("printf return: %i\n", printf("world % dwtest"));

	printf("printf return: %i\n", _printf("world % dwtest"));

	printf("printf return: %i\n", printf("world %"));

	printf("printf return: %i\n", _printf("world %"));
/*******************************************/

	_printf("char: %c\n", "cs");

	printf("char: %c\n", "cs");

/*******************************************/

	return (0);
}
