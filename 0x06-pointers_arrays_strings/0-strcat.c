#include "main.h"

/**
 * _strcat - Function concatenates two strings
 * @dest: initial string
 * @src: string to append
 * Return: dest(concatenated string)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
