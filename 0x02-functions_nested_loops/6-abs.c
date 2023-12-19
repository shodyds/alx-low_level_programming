#include "main.h"

/**
 * _abs - Function compute abosolute value
 * @n: character to be computed
 * Return: absolute value
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abs_v;
		abs_v = a * -1;
		return (abs_v);
	}
	return (a);
}
