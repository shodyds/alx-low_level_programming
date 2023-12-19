#include "main.h"

/**
 * _abs - Function compute abosolute value
 * @a: character to be computed
 * Return: absolute value
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	return (a);
}
