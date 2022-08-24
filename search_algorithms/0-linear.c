#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the size of the array
 * @value: he value to search for
 * Return: i or -1 otherside
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array || value == '\0')
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
