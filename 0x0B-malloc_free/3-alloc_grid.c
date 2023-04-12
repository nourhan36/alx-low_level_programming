#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @w: width
 * @h: height
 * Return: pointer to 2 dimension array
 */
int **alloc_grid(int w, int h)
{
	int **a;
	int x, y;

	if (w <= 0 || h <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * h);

	if (a == NULL)
		return (NULL);

	for (x = 0; x < h; x++)
	{
		a[x] = malloc(sizeof(int) * w);

		if (a[x] == NULL)
		{
			for (; x >= 0; x--)
				free(a[x]);

			free(a);
			return (NULL);
		}
	}

	for (x = 0; x < h; x++)
	{
		for (y = 0; y < w; y++)
			a[x][y] = 0;
	}

	return (a);
}
