#include "main.h"

/**
 * char *_memset - Function fills memory with constant byte
 * @b: The character
 * @s: pointer to the first element of address
 * @n: number of character or byte to change
 * Return: changed array or address via s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
