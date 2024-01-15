#include "main.h"
#include <stblib.h>

/**
 * _strdup - function copies string to a newly allocated memory
 * @str: input string
 * Return: return pointer to the duplicate string or null
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = (char *)malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (str[j])
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
