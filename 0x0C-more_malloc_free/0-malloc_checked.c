#include "main.h"

/**
 * malloc_checked - function allocate memory
 * @b: input character
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
