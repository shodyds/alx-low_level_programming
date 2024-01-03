#include "main.h"

/**
 * _strlen - Function count number of characters
 * @s: pointer to the first element of the character
 * Return: lenght of character
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != /0)
	{
		count++;
		s++;
	}
	return (count);
}
