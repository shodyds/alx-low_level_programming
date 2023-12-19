#include "main.h"

/**
 * print_sign - function returns +, - or 0 when value is parse to n
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

