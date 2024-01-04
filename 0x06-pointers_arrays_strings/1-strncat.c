#include "main.h"

/**
 * _strncat - Function concatenates two strings
 * @dest: initial string
 * @src: string to append
 * @n: number of character to append
 * Return: dest(concatenated string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (n > j && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'
	return (dest);
}
