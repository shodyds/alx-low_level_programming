#include "main.h"

/**
 * print_line - Function print line n mumber of time
 * @n: character to be printed
 * Return: void
 */

void print_line(int n)
{
	int i, n;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
	{
		_putchar ('_');
	}
		putchar('\n');
	}
}
