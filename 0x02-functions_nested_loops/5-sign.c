#include "main.h"

/**
 * print_sign - function returns + or - operators or 0 when n is postive or negative or 0
 * @n: character for checking conditions
 * Return: 1 or -1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}

