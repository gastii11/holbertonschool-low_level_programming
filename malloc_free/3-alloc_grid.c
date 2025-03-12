#include "main.h"
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0) || (height <= 0)
	{
		return (NULL);
	}

	**grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

