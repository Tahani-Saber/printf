#include "main.h"

/**
 * num_of_digits - calculate the number of a number's digits.
 *
 * @num: number to be processed.
 *
 * Return: num of the digits
 */
int num_of_digits(unsigned int num)
{
	int len = 0;

	while (num / 10 != 0)
	{
		num = num / 10;
		len++;
	}
	return (len + 1);
}
