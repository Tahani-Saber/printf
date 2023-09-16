#include "main.h"

/**
 * main - print formated string
 *
 * Return: always success (0), otherwise (1).
 */
int main(void)
{
	_printf(NULL);
	printf(NULL);

/*******************************************/

	_printf("STRING\n");
	printf("STRING\n");

/*******************************************/

	_printf("formated string: %s", "abdelrahman\n");
	printf("formated string: %s", "abdelrahman\n");

/*******************************************/

	_printf("char: %c\n", 'c');
	printf("char: %c\n", 'c');

/*******************************************/

	_printf("test %% symbol\n");
	printf("test %% symbol\n");

/*******************************************/


	return (0);
}
