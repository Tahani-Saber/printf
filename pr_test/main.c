#include "main.h"

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

	printf("printf return: %i\n", printf("char: %i\t-\t", 555533));

	printf("_printf return: %i\n", _printf("char: %i\t-\t", 555533));
/*******************************************/

	return (0);
}
