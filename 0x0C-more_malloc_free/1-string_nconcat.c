#include "main.h"

/**
 * *string_nconcat - Function that concatenates 2 strings
 * @s1: input characters
 * @s2: input characters
 * @n: number of characters to be concatenated
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j, len1, len2;

	while (*s1 != '\0')
		len1++;
	while (*s2 != '\0')
		len2++;
	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while ((n < len2) && (i < (len1 + n)))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
