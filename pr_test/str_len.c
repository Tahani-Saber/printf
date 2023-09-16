#include "main.h"

/**
 * _str_len -function to calculate the str length
 * @s: argu.of the func.
 *
 * Return: 0
 */

int _str_len(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
