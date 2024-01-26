#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function print numbers
 * @separator: character or value seperators
 * @n: number of characters
 * @... sequence of arguments
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
		printf("%d", va_arg(list, int));
		if  (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
