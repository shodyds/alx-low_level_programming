#include "main.h"

/**
 * _isalpha - _isalpha returns 1 if lowercase letter
 * @c: Parameter to check condition
 * Return: 1 or 0
 */
int _isalpha(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
