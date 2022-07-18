#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to find
 * @index: index of bit value
 * Return: j or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
int j;

	if (index > 63)
		return (-1);

	j = n >> index & 1;
		return (j);
}
