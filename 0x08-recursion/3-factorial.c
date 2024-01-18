#include "main.h"
/**
 * factorial - Function calaculates factorial of number
 * @n: input character
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (1 * factorial(n - 1));
}
