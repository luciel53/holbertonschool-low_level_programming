#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value we're searching
 * Return: mid or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = size - 1, mid, high = 0, i;
	int x = 0;

	if (!array || value == '\0')
		return (-1);

	while (high <= low)
	{
		printf("Searching in array: ");
		mid = (low + high) / 2;

		for (i = high; i < low ; i++)
		{
			printf("%d ", array[i]);
		}

		if (x == array[mid])
			return (mid);

		printf("%d\n ", array[i]);

		if (value > array[mid])
			high = mid + 1;

		else if (value < array[mid])
			low = mid - 1;

		else
			return (mid);

	}
	return (-1);
}

