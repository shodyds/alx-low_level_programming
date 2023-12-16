#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the Alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
