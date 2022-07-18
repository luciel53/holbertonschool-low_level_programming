#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number to find
 * @index: index of bit value
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	/* ~ inverse bit */
	*n = *n & ~1 << index;

	return (1);
}
