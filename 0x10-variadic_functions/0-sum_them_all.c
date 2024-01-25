#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - functions return sum of parameters
 * @n: number of parameter to add
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
       	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}
	va_end(list);
	return (0);
}



