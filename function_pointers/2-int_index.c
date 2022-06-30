#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: pointer
 * @size: operator
 * @cmp: pointer function
 * Return: array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (size);
	}
	for (i = 0 ; i < size ; i++)
	{
		cmp(array[i]);
		if (array[i] > 0)
		{
			return (array[i]);
		}
	}
	return (array[i]);

}
