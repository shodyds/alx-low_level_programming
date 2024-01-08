#include "main.h"

/**
 * _strchr - Function locates character in string
 * @s: input string
 * @c: character to be checked
 * Return: pointer at the first occurence of character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	return (NULL);
}
