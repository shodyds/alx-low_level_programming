#include "main.h"

/**
 * print_alphabet_x10: print lowercase letters 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 'a';
		
		while (j <= 'z')
		{
			_putchar (j);
			j++;
		}
		i++;
		_putchar ('\n');
	}
}
