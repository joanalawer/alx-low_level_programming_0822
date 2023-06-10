#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function returns a pointer to a 2D  array of integers.
 * @width: colums
 * @height: rows
 * Return: Pointer to 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int h, w, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			arr[h][w] = 0;

	return (arr);
}
