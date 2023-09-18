#include "main.h"

/**
 * print_ptr - function to print address
 * @format: allowed formats
 *
 * Return: address
 */

int print_ptr(const char * const format, ...)
{
        int index, index2;
        char *sp;
        va_list ptr;

        va_start(ptr, format);
        while (format && format[index] != '\0')
        {
                while (formats[index2].type != NULL)
                {
                        if (format[index] == *formats[index2].type)
                        {
                                _printf("%s", sp);
                                formats[index2].func(ptr);
                                sp = ", ";
                        }
                        index2++;
                }
                index2 = 0;
                index++;
        }
        va_end(ptr);
        return (ptr);
}
