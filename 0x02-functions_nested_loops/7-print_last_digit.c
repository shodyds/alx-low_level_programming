#include "main.h"

/**
 * print_last_digit - print and return the last value of num
 * @num - input character
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	num = num % 10;
	_putchar (num);
	return (num);
}
	

