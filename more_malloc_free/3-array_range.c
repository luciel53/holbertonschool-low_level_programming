#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - function
* @min: operator
* @max: operator
* Return: a
*/

int *array_range(int min, int max)
{
int *a;
int i = 0;
int size = 0;

	if (min > max)
		return (NULL);
	if (min < 0)
		return (NULL);

	size = max - min + 1;
	a = malloc(sizeof(int) * size);

	if (!a)
		return (NULL);

	if (i < 0)
		return (NULL);

	while (i <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
return (a);
}
