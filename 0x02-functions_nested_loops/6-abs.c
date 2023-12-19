#include "main.h"

/**
 * _abs - Function compute abosolute value
 * @n: character to be computed
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
