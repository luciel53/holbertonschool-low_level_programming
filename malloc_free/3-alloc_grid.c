#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - function
* @width: operator and pointer
* @height: operator and pointer
* Return: s
*/

int **alloc_grid(int width, int height)
{

int **a;
int i;
int j;

	if (width == 0 || height == 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (j = 0 ; j < height ; j++)
	{
		a[j] = malloc(sizeof(int *) * width);

			if (a[j] == NULL)
			{
				for (; j < height ; j++)
				{
					free(a);
				}
				free(a);
				return (NULL);
			}
	}

	for (j = 0 ; j < height ; j++)
	{
		for (i = 0 ; i < height ; i++)
			a[i][j] = 0;
	}
return (a);
}
