#include "main.h"

/**
 * print_rev - Function prints string in reverse
 * @s: Pointer to the address of the first element
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (i = count; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
