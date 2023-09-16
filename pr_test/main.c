#include "main.h"

/**
 * main - print formated string
 *
 * Return: always success (0), otherwise (1).
 */
int main(void)
{
	int n;

	printf(NULL);
	n = _printf(NULL);

	printf("NULL len: %d\n", n);

/*******************************************/

	printf("\nSTRING\n%n", &n);
	printf("STRING len: %d\n", n - 1);
	n = _printf("STRING\n");

	printf("STRING len: %d\n", n);
/*******************************************/

	printf("\nformated string: %s\n%n", "abdelrahman", &n);
	printf("formated string len: %d\n", n - 1);
	n = _printf("formated string: %s\n", "abdelrahman");

	printf("formated string len: %d\n", n);
/*******************************************/

	printf("\nchar: %c\n%n", 'c', &n);
	printf("char len: %d\n", n - 1);
	n = _printf("char: %c\n", 'c');

	printf("char len: %d\n", n);
/*******************************************/

	printf("\ntest %% symbol\n%n", &n);
	printf("symbol len: %d\n", n - 1);
	n = _printf("test %% symbol\n");

	printf("symbol len: %d\n", n);
/*******************************************/


	return (0);
}
