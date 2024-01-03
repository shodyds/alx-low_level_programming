#include "main.h"

/**
 * _puts - Function print string
 * @str: pointer to the address of the 1st element
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
