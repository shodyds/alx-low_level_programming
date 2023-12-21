#include "main.h"

/**
 * _isdigit - Function check if character is a number
 * @c: Character to check condition
 * Return: returns 1 if digit else returns 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
