#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all combination of single digit number
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <=9)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
