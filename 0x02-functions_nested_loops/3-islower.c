#include "main.h"

/**
 * _islower - _islower returns 1 if lowercase letter
 * @c: Parameter to check condition
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
