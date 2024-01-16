#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function returns pointer to 2D array
 * @width: length of each 1D array
 * @height: height of the array
 * Return: pointer to a 2D array or null
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = (int **)malloc(height * sizeof(int *));
	if (alloc == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		alloc[i] = malloc(width * sizeof(int));
		if (alloc[i] == NULL)
		{
			for (; i >= 0; i--)
				free(alloc[i]);
			free(alloc);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			alloc[i][j] = 0;
	}
	return (alloc);
}
