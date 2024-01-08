#include "main.h"

/**
 * _memcpy - Function copies memory area
 * @dest: pointer to the first element of memnory area
 * @src: character to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n < 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		n++;
	}
}
