#include "main.h"

/**
 * jack_bauer - Function print every minute of the day
 * Return: void
 */
void jack_bauer(void);
{
	int a = '0', b, c, d;

	while (a <= '2')
	{
		b = '0';
		while (b <= '9')
		{
			if ((a <= '1' && b < = '9') || (a <= '2' && b <= '3'))
			c = '0';
			while (c <= 5)
			{
				d = '0';
				while (d <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
