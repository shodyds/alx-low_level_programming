#include "main.h"

/**
 * _strncpy - Function copies string
 * @dest: destination variable
 * @src: source variable
 * @n: number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n > i && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
