#include "main.h"

/**
 * reverse_array - print array in reverse
 * @a: pointer to the first element of the array
 * @n: number of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	while (i < n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
