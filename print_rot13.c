#include "main.h"

/**
 * print_rot13 - encodes strings to rot13.
 *
 * @arg: string to be processed.
 *
 * Return: number of character had printed.
 */
int print_rot13(va_list arg)
{
	char alpha[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot13[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int size = sizeof(rot13) / sizeof(*rot13);
	int index = 0;
	int forIndex;
	char *string = va_arg(arg, char *);

	if (string == NULL)
		string = "(null)";

	while (string[index] != '\0')
	{
		for (forIndex = 0; forIndex < size; forIndex++)
		{
			if (string[index] == alpha[forIndex])
			{
				_putchar(rot13[forIndex]);
				break;
			}
		}

		if (forIndex == size)
			_putchar(string[index]);

		index++;
	}
	return (index);
}
