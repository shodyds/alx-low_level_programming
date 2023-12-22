#include "main.h"
/**
 * print_diagonal - Function prints backslash character n times
 * @n: Character contain n times of character to be printed
 * Return: void
 */

void print_diagonal(int n)
{       
        int i;

        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (i = 1; i <= n; i++)
                {
                        _putchar(92);
		}
		_putchar('\n');
	}
}
