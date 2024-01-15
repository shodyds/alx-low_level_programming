#include "main.h"
#include <stdlib.h>

/**
 * create_array - function create and initialize array of chars
 * @size: size of array
 * @c: input character
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
