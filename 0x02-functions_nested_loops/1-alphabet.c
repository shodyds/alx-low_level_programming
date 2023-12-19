#include "main.h"

/**
 * main - Entry point
 * Description: prints lowercase letters
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar ('\n');
}
