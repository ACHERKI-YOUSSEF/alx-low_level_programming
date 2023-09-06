#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **lol;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	lol = malloc(sizeof(int *) * height);

	if (lol == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		lol[x] = malloc(sizeof(int) * width);

		if (lol[x] == NULL)
		{
			for (; x >= 0; x--)
				free(lol[x]);

			free(lol);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			lol[x][y] = 0;
	}

	return (lol);
}
