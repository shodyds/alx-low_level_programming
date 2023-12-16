#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all combination of single digit number
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num == 57)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
