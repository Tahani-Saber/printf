#include "main.h"

/**
 * _strlen - function to calculate the str length
 * @s: argu. of the func.
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
