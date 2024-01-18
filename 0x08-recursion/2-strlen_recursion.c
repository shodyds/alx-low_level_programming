#include "main.h"

/**
 * _strlen_recursion - function returns length of string
 * @s: input characters
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
