#include <stdio.h>

/**
 * main - Entry point
 * Description: Print upper and lowercase letter
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar (c);
		c++;
	}
	putchar('\n');
	return (0);
}
