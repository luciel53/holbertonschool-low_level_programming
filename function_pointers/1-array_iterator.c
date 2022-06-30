#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function pointer
 * @array: pointer and operator
 * @size: operator
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
int j = size;
	if (array != NULL)
	for (i = 0 ; i < j ; i++)
	{
		if (action != NULL)
		action(array[i]);
	}
}
