#include "main.h"
#include <limits.h>

/**
 * main - print formated string
 *
 * Return: always success (0), otherwise (1).
 */
int main(void)
{

/*******************************************/

/*	printf("printf return: %i\n", printf("char: %c% %c %c", 'c', 'M', 'S'));

	printf("_printf return: %i\n", _printf("char: %c% %c %c", 'c', 'M', 'S'));
*/

	printf("printf return: %i\n", printf("bin int: %v\t-\t", 5678910234));

	printf("_printf return: %i\n", _printf("bin int: %b\t-\t", 98));
/*******************************************/

	return (0);
}
