#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - functions return sum of parameters
 * @n: number of parameter to add
 * @...: a variable of parameter to calculate the function
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}



