#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all combination of single digit number
 * Return: 0
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num == '9')
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
