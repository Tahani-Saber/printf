#include "main.h"

/**
 * to_binary - convert unsigned int to binary
 * @n: the int to be converted
 *
 * Return: binary as str
 */

char *to_binary(unsigned int n)
{
	int req_bits = 0;
	unsigned int temp = n;
	int index;
	char *binary_str;

	while (temp > 0)
	{
		req_bits++;
		temp >>= 1;
	}
	binary_str = (char *)malloc(req_bits);
	if (!binary_str)
		return (NULL);
	memset(binary_str, '0', req_bits);
	binary_str[req_bits] = '\0';
	index = req_bits - 1;
	while (n > 0)
	{
		if (n & 1)
			binary_str[index] = '1';
		n >>= 1;
		index--;
	}
	return (binary_str);
}
