#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: 0
*/

int **alloc_grid(int width, int height)
{
	int **r, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	r = malloc(height * sizeof(int *));
	if (r == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		r[x] = malloc(width * sizeof(int));
		if (r[x] == NULL)
		{
			while (x >= 0)
			{
				free(r[x]);
				x--;
			}
			free(r);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			r[x][y] = 0;
	}
	return (r);
}
