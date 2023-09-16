#include "main.h"

/**
 * _putchar - function that print / write char
 * @c: the arg. present the char to print
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
