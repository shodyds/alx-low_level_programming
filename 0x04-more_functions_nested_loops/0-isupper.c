#include "main.h"

/**
 *  _isupper - Function check for uppercase letters
 *  @c: Character for condition
 *  Return: on Success 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
		return (1);
	else
		return (0);
}
