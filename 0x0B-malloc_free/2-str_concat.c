#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concatenate strings
 * @s1: input value
 * @s2: input value
 * Return: pointer to a newly allocated memory or null
 */
char *str_concat(char *s1, char *s2)
{
	int *str;
	int i;
	int j;
	int r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	str = (char *)malloc((i + j + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	r = 0;
	while (s1[i] != '\0')
	{
		str[r] = s1[i];
		i++;
		r++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[r] = s2[j];
		r++;
		j++;
	}
	str[r] = '\0';
	return (str);
}
