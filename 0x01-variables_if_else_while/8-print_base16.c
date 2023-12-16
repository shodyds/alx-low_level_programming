#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all hexadecimal numbers
 * Return: 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'A';
	while (num <= 'F')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
