#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @g: 2d grid
 * @h: height
 * Return: nothing
 *
 */
void free_grid(int **g, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(g[i]);
	}
	free(g);
}
