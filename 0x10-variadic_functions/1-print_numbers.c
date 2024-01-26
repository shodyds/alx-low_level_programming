#include "variadic_functions.h"
#include <stdargs.h>

/**
 * print_numbers - Function print numbers
 * @seperator: character or value seperators
 * @n: number of characters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        va_list list;

	va_start(list, n);
        i = 0;
        while (i < n)
        {
                printf(%d, va_arg(list, n));
                if  (i != (n-1) && seperator != NULL)
                {
                        printf(%s, seperator);
                }
		i++;
        }
	va_end(list);
}
