#include "main.h"

/**
 * print_last_digit - print and return the last value of num
 * @num - input character
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	num = num % 10;
	_putchar (num + '0');
	return (num);
}
