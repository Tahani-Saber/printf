#include "main.h"

/**
 * print_digit - print single digit.
 *
 * @n: digit to be printed.
 *
 * Return: Nothing.
 */
int print_digit(int n)
{
	_putchar(n + '0');
	return (1);
}

/**
 * print_recursive - Recursive function to print the entire number.
 *
 * @n: number to be processed.
 *
 * Return: Nothing
 */
int print_recursive(unsigned int n)
{
	static int count = 0;

	if (n == 0)
	{
		return (0);
	}

	print_recursive(n / 10);
	return count += print_digit(n % 10);
}

/**
 * print_number - print numbers that more than 1 digit.
 *
 * @n: number to be processed.
 *
 * Return: Nothing.
 */
int print_int(va_list arg)
{
	int num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
	}
	else if (num == 0)
	{
		print_digit(0);
		return (1);
	}
	return (print_recursive(num));
}
