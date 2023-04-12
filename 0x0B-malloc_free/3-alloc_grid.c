#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - a function that returns a pointer to a 2-dimensional arr of int
 * @width: an int
 * @height: an int
 * Return: web to string
 */
int **alloc_grid(int width, int height)
{
	int **web;
	int i, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	web = malloc(sizeof(int *) * height);
	if (web == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		web[i] = malloc(sizeof(int) * width);
		if (web[i] == NULL)
		{
			for (; i >= 0; i--)
				free(web[i]);
			free(web);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			web[i][y] = 0;
	}
	return (web);
}
