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

	if (size > 0)
	{
		if (array != NULL || cmp != NULL)
		{
			for (i = 0 ; i < size ; i++)
			{
				if ((cmp(array[i])))
					return (i);
			}
		return (-1);
		}
	}
	return (-1);
}

