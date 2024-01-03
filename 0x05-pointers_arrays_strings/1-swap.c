#include "main.h"

/**
 * swap_int - Function swaps two numbers
 * @a: pointer to the character to swap
 * @b: pointer to the character to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
