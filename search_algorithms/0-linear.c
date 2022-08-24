#include "search_algos.h"



int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	if (!array || value == 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (i);
}
